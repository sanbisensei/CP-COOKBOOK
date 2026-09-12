#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
// mathar upor diye gese
// brute force easy but math diye kora hard
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y,k, ans=0;
    cin>>x>>y>>k;
    
    ll z = y -x;
    ll last = x+k-1;
    int c = min(last,z); // eita check kortisi j last value z er che boro kina

    for(int i=x;i<=c;i++){
        ans = ans +(z%i);
    }
    if(last > z){
        ans+= (last - max(x,z+1)+1)*z;
    }
     cout<< ans<< endl;
    }
    return 0;
}