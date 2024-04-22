#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(vector<ll>&arr,ll c,ll d,ll n){
    int a = arr[0];
    vector<ll>b;
    
    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            b.push_back(a+i*c+j*d);
        }
    }
    sort(b.begin(),b.end());
    if(b==arr) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll  s,c,d;
        cin>>s>>c>>d;
        vector<ll>arr(s*s);
        for(ll i=0;i<s*s;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        solve(arr,c,d,s);
    }
}