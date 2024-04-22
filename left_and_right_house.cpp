#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool checkl(ll one, ll zero) {
    
    return zero >= one;
}

bool checkr(ll one, ll zero) {
    
    return one >= zero;
}
void solve2(vector<ll>arr){
    ll n = arr.size();
    float mini = INT16_MAX;
    ll onel=0,zerol=0,oner=0,zeror=0;
    set<pair<ll,ll>>ans;
    for(ll i =0;i<n;i++){
        if(arr[i]==0)zeror++;
        else oner++;
    }
    // cout<<zeror<<" "<<oner<<endl;
    // if(checkl(onel,zerol) && checkr(oner,zeror)){
            // mini = min(mini,abs(n/2-i));
            if(oner>=zeror)
            ans.insert( {n/2,0});

    
    
    for(ll i = 0;i<n;i++){
        // cout<<i+1<<"----";
        
        if(arr[i]==0){
            zerol++;
            zeror--;
            // cout<<zerol<<" "<<onel<<" "<<zeror<<" "<<oner<<" "<<endl;
        }
        else{
            onel++;
            oner--;
            // cout<<zerol<<" "<<onel<<" "<<zeror<<" "<<oner<<" "<<endl;
        }
        if(checkl(onel,zerol) && checkr(oner,zeror)){
            mini = min(mini,abs((float)n/2-(i+1)));
            // cout<<i+1<<" ";
            ans.insert({mini,i+1});
        }
    }
    // for(auto i:ans){
    //     cout<<i.first<<" -- "<<i.second<<endl;
    // }
    auto firstElement = ans.begin();
    cout<<(*firstElement).second<<endl;
    // cout<<endl;
    
}
void solve(string n){
    ll diffl = 0,diffr=0;
    ll len = n.length();
    for(ll i = n.length()-1;i>=0;i--){
        if(n[i]=='0')diffl++;
        else diffl--;
    }
    vector<ll>ans;
    if(diffl >= 0 && diffr <= 0){cout<<0<<endl;return ;}
    for(ll i = n.length()-1;i>=0;i--){
        if(diffl >= 0 && diffr < 0){ ans.push_back(i);}

        else if (n[i]=='0'){
            diffl--;
            diffr++;
        }
        else if(n[i]=='1'){
            diffl++;
            diffr--;
        }
    }
    ll c = abs(n.length()-2*ans[0]);
    for(ll i = 0;i<ans.size();i++){
        ll a =abs(n.length()-2*ans[i]);
        c = min(c , a);
    }
    cout<<(n.length()-c)/2<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll len ;
        cin>>len;
        string n;
        cin>>n;
        vector<ll>arr(len);
        
        for(int i = 0;i<len;i++)arr[i]=(n[i]-'0');
        // solve(sn);
        solve2(arr);
    }
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool checkl(ll one, ll zero) {
    
    return zero >= one;
}

bool checkr(ll one, ll zero) {
    
    return one >= zero;
}
void solve2(vector<ll>arr){
    ll n = arr.size();
    float mini = INT16_MAX;
    ll onel=0,zerol=0,oner=0,zeror=0;
    set<pair<ll,ll>>ans;
    for(ll i =0;i<n;i++){
        if(arr[i]==0)zeror++;
        else oner++;
    }
    
            if(oner>=zeror)
            ans.insert( {n/2,0});

    
    
    for(ll i = 0;i<n;i++){
        // cout<<i+1<<"----";
        
        if(arr[i]==0){
            zerol++;
            zeror--;
            
        }
        else{
            onel++;
            oner--;
          
        }
        if(checkl(onel,zerol) && checkr(oner,zeror)){
            mini = min(mini,abs((float)n/2-(i+1)));
          
            ans.insert({mini,i+1});
        }
    }
   
    auto firstElement = ans.begin();
    cout<<(*firstElement).second<<endl;
    
    
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll len ;
        cin>>len;
        string n;
        cin>>n;
        vector<ll>arr(len);
        
        for(int i = 0;i<len;i++)arr[i]=(n[i]-'0');
        // solve(sn);
        solve2(arr);
    }
}
