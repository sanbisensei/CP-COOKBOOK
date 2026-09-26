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
    for(int i=0;i<n;i++) cin>>v[i];

    vector<ll> ansv;

    for(int i=0;i<n;i++){
            ll big=0;
            ll small=0;
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) small++;
            if(v[i]<v[j]) big++;
        }
        int ans = max(big,small);
        ansv.push_back(ans);
    }

    for(ll x: ansv){
        cout<< x<< " ";
    }
    cout<<endl;
   }
    return 0;
}