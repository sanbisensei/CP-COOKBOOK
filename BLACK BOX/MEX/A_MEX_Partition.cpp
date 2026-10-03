#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int mex(vector<ll> const& A) {
    set<int> b(A.begin(), A.end());

    int result = 0;
    while (b.count(result))
        ++result;
    return result;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;cin>>n;
    vector<ll> a(n);
    
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<mex(a)<<endl; 
}

    return 0;
}