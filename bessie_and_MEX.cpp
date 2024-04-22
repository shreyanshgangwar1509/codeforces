#include<bits/stdc++.h>
using namespace std;
int mex(vector<int>arr,int s,int e){
    sort(arr.begin(),arr.begin()+e);
    for(int i=s;i<e;i++){
        if(arr[i]!=i) return i;
    }
}
void solve2(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans(n+1);
    ans[n]=n;
    int mini = INT16_MAX;
    // reverse(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
        mini = min(mini,ans[i+1]);
        
        ans[i]=mini-arr[i];
        
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans(n);
    for(int i=0;i<n;i++)ans[i]=i;
    for(int i =0;i<n;i++){
        if(arr[i]+ans[i]>mex(ans,0,i)){
            
        }
        else {

        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve2();
    }
}