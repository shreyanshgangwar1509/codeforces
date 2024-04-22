#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        map<int,int>mapp;
        for(int i=0;i<n;i++){
            mapp[arr[i]]++;
        }
        int cnt =0;
        for(auto i:mapp){
            if(i.second >= 3)cnt+=(i.second/3);
        }
        cout<<cnt<<endl;
    }
}