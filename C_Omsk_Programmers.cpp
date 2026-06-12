#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,x;
    cin>>a>>b>>x;
    ll ans = abs(a-b);
    ll c=0;
    while(a!=0 || b!=0){
        if(a>b){
            a=a/x;
        }
        else{
            b=b/x;
        }
        c++;
        ans = min(ans, c+abs(a-b));
        
    }
    cout<<ans<<endl;
    }
    return 0;
}