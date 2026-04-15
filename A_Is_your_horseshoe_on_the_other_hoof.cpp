#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    ll a,b,c,d;cin>>a>>b>>c>>d;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<< 4- s.size()<<endl;

    return 0;
}