#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
    if(a!=b && a!=c){
        cout<< a<<endl;
    }
    if(b!=a && b!=c){
        cout<< b<<endl;
    }
    if(c!=a && c!=b){
        cout<< c<<endl;
    }
    }
    return 0;
}