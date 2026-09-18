#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a;cin>>a;
    ll b;cin>>b;
    ll n;cin>>n;
    vector<ll> v(n);

    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++){
        v[i] = min(v[i],a-1);
    }
    ll tot = accumulate(v.begin(), v.end(),0LL);
    cout<< (b+tot)<<endl;
    
    
    }
    return 0;
}