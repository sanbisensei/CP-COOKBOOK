#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
// Problem : Compute X^n mod M
/*
brute force korle n huge number hoile TLE confirm
to avoid that we need binary exponential trick
*/

ll binpow(ll x, ll n, ll m){
x= x%m; // we need x so age x re choto banabo
long long res =1;

while(n>0){
    if(n&1){
        // each step e amra m mod korbo
        res = res * x %m;
    }
    // same, each step e m mod korsi
    x = x*x %m;
    n=n/2;
}

return res;

}


int main(){
    ll x,n,m;
    x = 3;n = 4;m = 7;
    cout<<binpow(x,n,m)<<endl;
    return 0;
}


// O(logN)