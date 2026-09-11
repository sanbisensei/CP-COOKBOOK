#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
    
        int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    
    cout<<accumulate(a.begin(),a.end(), 0LL)+accumulate(b.begin(),b.end(), 0LL)-b[n-1]<<endl;
 
}
    return 0;
}