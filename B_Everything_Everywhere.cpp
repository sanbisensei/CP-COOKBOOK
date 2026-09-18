#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ck=0;
    for(ll i=0;i+1<n;i++){
        if(abs(v[i]-v[i+1])==__gcd(v[i],v[i+1])){
            ck++;
        }
    }
    cout<<ck<<"\n";
    }
    return 0;
}