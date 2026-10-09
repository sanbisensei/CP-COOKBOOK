#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    ll n;cin>>n;
    ll k;cin>>k;

    vector<ll> v(n);
    ll ans=0;
    ll vsum =0;
    for(int i=0;i<n;i++){
         cin>>v[i];
         vsum+=v[i];
         ans++;

         vsum= max(0LL,vsum-k);
    }
   if(vsum>0){
    ans+=(vsum + k-1)/k;
   }
   cout<<ans<<endl;



    return 0;
}