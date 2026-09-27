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
   vector<int> v(n);

   for(int i =0;i<n;i++) cin>>v[i];

    bool peyechi=false;

   for(int i=0;i+2<n;i++){
    if(v[i]<v[i+1] && v[i+2]<v[i+1]){
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
        peyechi=true;
        break;
    }
   }
    if(peyechi==false){
        cout<<"NO"<<endl;
    }
   }
    return 0;
}