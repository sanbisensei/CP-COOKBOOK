#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

ll binpow(ll a,ll b){
    if(b==0) return 1;
    ll res = 1;
    if(b%2 == 0){
        return binpow(a*a,b/2);
    }
    else{
        return a * binpow(a*a,b/2);
    }
    
}

int main(){
    ll a = 3;
    ll b =13;
    cout<<binpow(a,b)<<endl;
    return 0;
}