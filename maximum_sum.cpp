#include<bits/stdc++.h>
typedef long long ll;
const int P = 1e9+7;
using namespace std;
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll S = 0, sum = 0;
    ll cur = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        cur += a[i];
        cur = max(cur, 0ll);
        S = max(S, cur);
    }
    sum = (sum % P + P) % P;
    S = S % P;
    int t = 1;
    for (int i = 0; i < k; i++) {
        t = t * 2 % P;
    }
    int ans = (sum + S * t - S + P) % P;
    cout << ans << '\n';
}
// understand modulo properties 

void solve2(vector<ll>arr,ll k){
    ll max_sum = 0;
    ll sum =0,cur =0;
    for(int i= 0;i<arr.size();i++){
        sum+=arr[i];
        cur+=arr[i];
        cur = max(cur ,0ll);
        max_sum = max(max_sum,cur);
    }

    sum = (sum % P + P )% P;

    ll t = pow(2,k) - 1;
    max_sum = max_sum % P;
    t = ((sum + (t*max_sum)) % P + P) % P;
    
    cout<<t<<endl;
    }
int main(){
    int t;
    
    cin>>t;
    
    while(t--){
        // ll s,k;
        // cin>>s>>k;
        // vector<ll>arr(s);
        // for(int i = 0;i<s;i++)cin>>arr[i];
        // solve2(arr,k);
        solve();
}
}

/*
const int P = 1e9 + 7;


*/
