#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    ll c=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    ll mysum=0;
    sum = sum/2;
    for(int i=0;i<n;i++){
        mysum+=a[i];
        c++;
        if(mysum>sum){
            break;
        }
        
    }
    cout<<c<<endl;

    return 0;
}