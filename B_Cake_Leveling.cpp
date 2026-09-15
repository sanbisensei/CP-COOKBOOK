#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
      int n;cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  ll sum= 0;
  ll ans= 1e9;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    ans = min(ans,sum/(i+1));
    cout<< ans<<" ";
  }
  cout << "\n";
  
}
    return 0;
}