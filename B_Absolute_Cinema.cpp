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
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
        }
    }
    ll max_val = *max_element(a.begin(),a.end());
    ll sum = accumulate(b.begin(),b.end(), 0ll);
    cout<< max_val+sum<<endl;
    }
    return 0;
}