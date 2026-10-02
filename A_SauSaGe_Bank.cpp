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
    int k;cin>>k;

    ll ans=1;
    if(k==1){
         for(int i=1;i<=n;i++){
        ans = ans*2;
    }
    cout<<ans<<endl;
    }
    else if(k==n){
        cout<<n*2<<endl;
    }
    else if(n>k){
        for(int i=1;i<=n-k+1;i++){
        ans = ans*2;}
        int b=k-1;
        cout<<ans+(b*2)<<endl;
    }
    }
    
    return 0;
}