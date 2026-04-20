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
    ll ans=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans=ans*i;
            while(n%i==0){
                n=n/i;
            }
        }
    }
    ans = ans * n;
    cout<<ans<<endl;
    }
    return 0;
}