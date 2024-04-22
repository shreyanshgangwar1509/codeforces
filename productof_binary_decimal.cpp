#include<bits/stdc++.h>
using namespace std;
vector<bool>res(1e5+6,0);
vector<int>binary;
int help(vector<int>binary,int &n){
    if(n==1)cout<<"YES"<<endl;
    for(int i=1;i<binary.size();i++){
        help(binary,n/=binary[i]);
    }
    cout<<"NO"<<endl;
}
void solve2(){
    vector<int>binary;
    binary.push_back(0);
    binary.push_back(1);
    int num = 1,num2=1;
    queue<int>st;
    st.push(1);
    while(!st.empty() ){
        int num = st.front();
        st.pop();
        if(num*10 <=100000){
        st.push(num*10);
        binary.push_back(num*10);
        }
        else break;
        if(num*10+1<=100000)
        {st.push(num*10+1);
        binary.push_back(num*10+1);}
        else break;
    }
    
}
void solve(int num){
    if(res[num])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
bool check(int n){
    while(n>0){
        int z =n%10;
        if(z==0 || z==1){
            n/=10;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
int t;
cin>>t;
    res[0]=1;res[1]=1;
    vector<int>ans;
    for(int i =10;i<1e5+1;i++){
        if(check(i)) {res[i]=1;ans.push_back(i);}
    }
    
    for(int n = 10;n<1e5+2;n++){
        for(auto i:ans){
            if(n%i==0){
                res[n]=res[n]|res[n/i];
            }
        }
    }
    while(t--){int num;
    cin>>num;
    solve(num);
    }

}