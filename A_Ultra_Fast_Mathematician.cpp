#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
int main(){
    string a,b;cin>>a>>b;
    string s = "";
    for(ll i=0;i<a.size();i++){
        s+= (a[i]!=b[i]) ? '1':'0';
    }
    cout << s << endl;
    return 0;
}