#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

ll binpow(ll a,ll b){
    ll res =1;

    while(b>0){
        
        if(b&1){
            res=res*a;
        }
       a=a*a;
       b>>=1; // basically b=b/2 eita korle binary er last digit chole jay 
    }
    return res;
}


int main(){
    ll a = 3;
    ll b =13;
    cout<<binpow(a,b)<<endl;
    return 0;
}

// time complexity - O(log2 n)
// not O(n)