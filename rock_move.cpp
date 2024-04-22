#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k,vector<pair<int,int>>arr(k)){
    int cnt =0;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==r || i==c || j==r || j == c )continue;
            else{
                cnt++;
            }
        }
    }
    
    cout<<(cnt)-k<<" "<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int r,c;
        // cin>>r>>c;
        vector<pair<int,int>>arr(k);
        for(int i=0;i<k;i++){
            cin>>r>>c;
            arr[i]={r,c};
        }
        solve(n,k,r,c);
    }
}