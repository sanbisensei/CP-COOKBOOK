#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    ll n;cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        s+= (i%2==0) ? "I love ":"I hate ";
        s+= (i==n-1) ? "it":"that ";
    }
    cout<<s<<endl;
    return 0;
}