// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// int find_ans(vector<ll>a,const ll k){
//     ll w =a[0];
//     const ll n = a.size();
//     int ans =0;
//     for(int i=0;i<n;i++){
//         w = max(w,a[i]);
//         if(w==a[k])++ans;
//     }
//     return ans;
// }
// int find(vector<ll>a,const ll k){
//     int ans = find_ans(a,k);
//     ll n = a.size();
//     swap(a[0],a[k]);
//     ans = max(ans,find_ans(a,0));
//     int i = 0;
//     for(;i< n;++i){
//         if(a[i]>a[k])
//             break;
//     if(i<n)swap(a[i],a[k]);
//     ans = max(ans,find_ans(a,i));
        
//     }
//     return ans;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll s,k;
//         cin>>s>>k;
//         vector<ll>arr(s);
//         for(int i = 0;i<s;i++) cin>>arr[i];
//         cout<<find(arr,k)<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k; k--;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = find_if(a.begin(), a.end(), [&](int v) { return v > a[k]; }) - a.begin();
        vector<int> pos(n); iota(pos.begin(), pos.end(), 0);
        int ans = 0;
        for (int i : {0, x}) {//i = 0 -> x
            if (i == n) {
                continue;
            }
            swap(pos[i], pos[k]);
            vector<int> stt(n);
            for (int j = 1, u = pos[0]; j < n; j++) {
                int v = pos[j];
                u = (a[u] > a[v] ? u : v);
                stt[u]++;
            }
            swap(pos[i], pos[k]);
            ans = max(ans, stt[k]);
        }
        cout << ans << '\n';
    }
}