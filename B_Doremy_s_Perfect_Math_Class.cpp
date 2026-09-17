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
    for(int i=0;i<n;i++) cin>>v[i];

   int ckr=v[0];
    for(int i=1;i<n;i++){
        ckr=__gcd(ckr,v[i]);
    }

    cout<<v[n-1]/ckr<<endl;
}
    return 0;
}