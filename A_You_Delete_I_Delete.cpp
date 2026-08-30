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
        bool skip = false;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='1' && skip==false){
            skip= true;
            continue;
        }
        if(s[i]=='0' && s[i+1]=='1'){
            s.erase(i,2);
            break;
        }
        if(s[i]=='1'&& s[i+1]=='0'){
            s.erase(i,2);
            break;
        }
    }
    cout<<s<<endl;
    }
    return 0;
}