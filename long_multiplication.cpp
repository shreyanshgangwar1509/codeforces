#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(string a,string b){
    vector<int>a1,b1;
    for(int i = 0;i<a.length();i++){
        a1.push_back(a[i]-'0');
        b1.push_back(b[i]-'0');
    }
    
    int n = a1.size();
    int s= 0;
    for(int i = 0;i<a1.size();i++){
        if(a1[s]==b1[s])s++;
    }
    
    if(a1[s]>b1[s]){
        for(int i = s+1;i<a1.size();i++){
            if(a1[i] > b1[i]) {
                int temp = a1[i];
                a1[i] = b1[i];
                b1[i] = temp;
            }
    }

        }
        else if(a1[s] < b1[s]){
            for(int i = s+1;i<b1.size();i++){
                if(a1[i] < b1[i]) {
                    int temp = a1[i];
                    a1[i] = b1[i];
                    b1[i] = temp;
                }
                
            }
        }
    for(int i = 0;i<a1.size();i++) cout<<a1[i];
    cout<<endl;
    for(int i = 0;i<b1.size();i++) cout<<b1[i];
    cout<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        solve(a,b);
}
}