#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x;cin>>x;
    ll y;cin>>y;
    ll k;cin>>k;
    ll ans=0;
    ll ck=k;
    for(ll i=0;i<k;i++){
        if((y-x)<(x+i)){
            ans += (k-i) * (y-x);
            break;
        }
        ans = ans+ ((y-x)%(x+i));
        
    }
    cout<<ans<<endl;
    }
    return 0;
}
