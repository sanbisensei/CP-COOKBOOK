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
    ll arr[n];
    for(ll i=0;i<n;i++) cin>> arr[i];

    ll ans = 0;
    for(ll i=0;i<n;i++){
        if(abs(arr[i]-(i+1))==0){
            continue;
        }
        else{
            ll c = abs(arr[i]-(i+1));
            ans = __gcd(ans,c);
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}