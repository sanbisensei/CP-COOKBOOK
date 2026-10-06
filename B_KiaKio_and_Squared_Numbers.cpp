#include <bits/stdc++.h>

using namespace std;

//mail_man will rise

using ll = long long;

constexpr ll mod = 1e9+7;

ll f(ll x){
    ll sum =0;

    while(x>0){
        ll d =x%10;
        sum+= d*d;
        x/=10;
    }

    return sum;
}



int main(){

    int t;
    cin >> t;
    while(t--){


    ll n;cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) {
        cin>>v[i];

        for(ll j=0;j<=10000;j++){
            v[i]=f(v[i]);
        }
        mp[v[i]]++;
    }
    
    ll ans=0;
    for(auto q:mp){
        ll count = q.second;
        if(count>1){
            ans+=count*(count-1)/2;
        }
    }
    cout<<ans<<endl;

   

    }
    return 0;
}