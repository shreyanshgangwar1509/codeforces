#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve2(){
    int n,k;
    cin>>n>>k;
    vector<int>v(2*n);
    map<int,int>mp1,mp2;
    vector<int>ans1,ans2;
    for(auto &i:v)cin>>i;

    for(int i =0;i<n;i++){
        mp1[v[i]]++;
        if(mp1[v[i]]==2){
            ans1.push_back(v[i]);
            ans1.push_back(v[i]);
        }
    }
    for(int i =n;i<2*n;i++){
        mp2[v[i]]++;
        if(mp2[v[i]]==2){
            ans2.push_back(v[i]);
            ans2.push_back(v[i]);
        }
    }
    int it = ans1.size();
    if(it>=2*k){
        while(it>=2*k){
            ans1.pop_back();
            ans2.pop_back();
            it--;
        }
    }
    else{
        for(auto i:mp1){
            if(it==2*k){
                break;
            }
            if(i.second == 1 && mp2[i.first]==1){
                ans1.push_back(i.first);
                ans2.push_back(i.first);
                it++;
            }
        }
    }
    // for(auto I:ans1)cout<<I<<" ";
    // cout<<"\n";
    // for(auto I:ans2)cout<<I<<" ";
    // cout<<"\n";
    for(int i=0;i<2*k;i++) cout<<ans1[i]<<" ";cout<<endl;
    for(int i=0;i<2*k;i++) cout<<ans2[i]<<" ";
    cout<<endl;
    
}
void solve(vector<ll>arr,ll n,ll k){
    vector<ll>left(n);
    vector<ll>right(n);
    vector<ll>r(2*k);
    vector<ll>l(2*k);
    ll cnt =0,cntr=0;
    for(int i =0;i<n;i++){left[i]=arr[i];}
    for(int i =0;i<n;i++){right[i]=arr[n+i];}
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    for(int i =0;i<n;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<right[i]<<" ";
    }cout<<endl;
    for(int i =0;i<n-1;i++){
        if(left[i]==left[i+1] && cnt<2*k){
            l[cnt++]=left[i];
            l[cnt++]=left[i+1];
            left[i]=-1;
            left[i+1]=-1;
        }
        
        if(right[i]==right[i+1] && cntr<2*k){
            r[cntr++]=right[i];
            r[cntr++]=right[i+1];
            right[i]=-1;
            right[i+1]=-1;
        }
        if(cnt==2*k && cntr==2*k) break;
    }
    for(int i =0;i<n;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<right[i]<<" ";
    }cout<<endl;
    for(int i = 0;i<n;i++){
        if(cnt<2*k && left[i]!=-1  && right[i]!=-1 ){
            l[cnt++]=left[i];
            r[cntr++]=left[i];
        }
        // if(cntr<2*k && right[i]!=-1 && left[i]!=-1){
        //     r[cntr++]=right[i];
            
        // }
        if(cnt==2*k && cntr==2*k) break;
    }
    for(int i=0;i<2*k;i++) cout<<l[i]<<" ";cout<<endl;
    for(int i=0;i<2*k;i++) cout<<r[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        // ll n,k;
        // cin>>n>>k;
        // vector<ll>arr(2*n);
        // for(int i = 0;i<2*n;i++) cin>>arr[i];
        // solve(arr,n,k);
        solve2();
    }
}