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
    ll an=0;
    for(ll b=1;b<=n;b++){
        an = an + (n/b)*(n/b);
    }
    cout<<an<<endl;
    }
    return 0;
}