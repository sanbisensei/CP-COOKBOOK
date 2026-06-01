#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    
        int t;
        cin >> t;
        while(t--){
            ll n,a,b;cin>>n>>a>>b;
        ll f = n/3;
        ll s = n%3;
        cout<<min({n*a,a*s+b*f,(f+1)*b})<<endl;
        }
        
    return 0;
}