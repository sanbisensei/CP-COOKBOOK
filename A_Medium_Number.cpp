#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
    ll z,x,c;cin>>z>>x>>c;
    vector<ll> a;
    a.push_back(z);
    a.push_back(x);
    a.push_back(c);
    sort(a.rbegin(),a.rend());
    cout<<a[1]<<endl;

    }

    return 0;
}