#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;cin>>s;
    int ans=0;
    for(int i=0;i+1<s.size();i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }

    cout<< (ans<=2 ? "YES\n" : "NO\n");
    }
    return 0;
}