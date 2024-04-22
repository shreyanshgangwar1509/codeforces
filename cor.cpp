#include<bits/stdc++.h>
const int P = 1e9+7;
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int c(int i,int j){
    float ans = fact(i)/(fact(j)*fact(i-j));
    return ans;
}
void solve(int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j)
            ans+=(c(i,j)%j);
        }
    }
    cout<<(ans % P + P) % P<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}