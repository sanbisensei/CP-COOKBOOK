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
    ll k;cin>>k;
    vector<ll> v(n);

    for(ll i=0;i<n;i++) cin>>v[i];
    
    sort(v.begin(),v.end());
   
    vector<ll> ans;
    ll c=0;
    for(ll i =0;i<n-1;i++){
        
        if(v[i+1]-v[i]<=k){
            c++;
        }
        else{
            ans.push_back(c+1);
            c=0;
        }
    }
    ans.push_back(c+1);
    if(ans.size()==1){
        cout<<0<<endl;
    }
    else if(ans.size()==2){
        ll mn = *min_element(ans.begin(), ans.end());
        cout<<mn<<endl;
    }
    else{
        ll mx = *max_element(ans.begin(), ans.end());
        cout<< n-mx<<endl;
    }
 }
    return 0;
}