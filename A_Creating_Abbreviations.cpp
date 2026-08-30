#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        
    set<char> f;
    set<char> l;
    int n,m;cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        char c = tolower(s[0]);
        f.insert(c);
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin>>s;
        for(char c: s){
            c = tolower(c);
            l.insert(c);
        }
        
    }

    for(char c:f){

    }
    bool missing = false;
    for(auto x: l){
        if(f.count(x)==0){
            missing = true;
            break;
        }
    }

    if(missing == true){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
    
    return 0;
}


