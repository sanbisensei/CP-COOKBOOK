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
    string s; cin>>s;
    
    ll ans =1;
    for(int i =1;i<n;i++){
        if(s[i-1]!=s[i]){
            ans++;
        }
    }
    if(ans != n && s[0] != s[n-1]){
        ans++;
    }
    cout<<ans<<endl;
    

    }
    return 0;
}