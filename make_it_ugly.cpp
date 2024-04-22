#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr){
    
    vector<int>ans;
    int temp=0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==arr[0]){
            temp++;
        }
        else if(arr[i]!=arr[0]){
            ans.push_back(temp);
            temp=0;
        }
    }
    if(temp>0)ans.push_back(temp);
    sort(ans.begin(),ans.end());
    if(ans.size()==1) cout<<-1<<endl;
    else cout<<ans[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>arr(s);
        for(int i=0;i<s;i++) cin>>arr[i];
        solve(arr);
    }
}