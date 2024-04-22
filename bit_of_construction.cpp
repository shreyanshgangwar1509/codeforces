#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll n,ll k){
    for(int i =0;i<n;i++){

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n==1){cout<<k<<endl;
        continue;
        }
        int start = 1;
        int z = log2(k);
        int t = 1 << z;
        cout<< (t-1)<<" ";
        cout<<(k-(t-1))<<" ";
        for(int i=2;i<n;i++){
            cout<<" 0 "<< " ";
        }
        cout<<endl;
        // solve(n,k);
    }
}