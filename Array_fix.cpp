#include<bits/stdc++.h>
using namespace std;
void ispossible(vector<long long int>&arr){
    for(int i = arr.size()-1;i>=1;--i){
        if(arr[i] < arr[i-1]) {
            bool ans = arr[i-1]/10 < arr[i-1]%10 && arr[i-1]%10 < arr[i];
            if(!ans){ cout<<"NO"<<endl; return ;}
        }
    }
    cout<<"YES"<<endl;
}
void solve(vector<long long int>&arr){
    long long curr =0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<curr){
            cout<<"NO"<<endl;
            return ;
        }
        else{
            long long x=arr[i]/10;
            long long y=arr[i]%10;
            if(x>=curr){
                if(y>=x){
                    curr=y;
                }
                else{
                    curr = arr[i];
                }
            }
            else{
                curr = arr[i];
            }
            
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<long long int>arr(s);
        for(int  i =0;i<s;i++) cin>>arr[i];
        solve(arr);
        solve(arr);
    }
}