#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        ll ta,fa,tb,fb;
        cin>>k>>ta>>fa>>tb>>fb;
        if(ta==tb){cout<<abs(fb-fa)<<endl;}
        else{
            ll mini;
            ll x;
            for(int k = 0;k<INT16_MAX;k= k+4){
                if(k>=fa && k>=fb) {x=k; break;}
            
            }
            ll a,b;
            a = abs(x-fa)+3+abs(x-fb);
            b = abs(x-4-fa)+3+abs(x-4-fb);
            mini = min(a,b);
            // cout<<x<<endl;
            cout<<mini<<endl;
        }
    }
}