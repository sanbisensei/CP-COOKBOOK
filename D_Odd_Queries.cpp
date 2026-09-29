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
    ll q;cin>>q;
    vector<ll> v(n);
    vector<ll> prefix(n+1);
    ll sum =0;

    for(int i=0;i<n;i++){
        cin>> v[i];
        prefix[i+1] = prefix[i] + v[i];
        sum += v[i];
    } 
    vector<ll> ans;
    for(int j=0;j<q;j++){
        ll l;cin>>l;
        ll r;cin>>r;
        ll k;cin>>k;
        

        ll oldSum = prefix[r] - prefix[l-1];
        
        ll newSum = sum - oldSum + (r-l+1)*k;
        
    
    ans.push_back(newSum);
    }
    
    
    for(ll x: ans){
        if(x%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
  }
   
    return 0;
}