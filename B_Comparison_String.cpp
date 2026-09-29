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
    string s;
    cin>>s;

    ll c=0;
    ll d=0;
    ll ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='<'){
            c++;
            d = 0;
        }
        else{
            d++;
            c = 0;
        }

        ans = max(ans,max(c,d));
    }

    cout<<ans+1<<endl;
    }
    return 0;
}