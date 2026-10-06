#include <bits/stdc++.h>
using namespace std;
//mail_man will not rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
   int t;
   cin >> t;
   while(t--){
       
     ll n;cin>>n;
     ll m;cin>>m;
     vector<ll> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     if(m==1){
        sort(v.begin(),v.end());
        cout<<v.back()<<endl;
        continue;
     }
     priority_queue<ll> p;
     ll sum=0;
     for(int i=0;i<m-1;i++){
        p.push(v[i]);
        sum+=v[i];
     }
     ll ans = -INFINITY;
     for(int i=m-1;i<n;i++){
        ll mbm = v[i] * m;
         ans = max(ans, mbm-sum);

         if(p.top()>v[i]){
            sum=sum-p.top();
         p.pop();
         p.push(v[i]);
         sum=sum+v[i];
         }
         
     }

     cout<<ans<<endl;
   }
    return 0;
}