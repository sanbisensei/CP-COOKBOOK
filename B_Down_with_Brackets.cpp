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
    bool ck=false;
    ll limit=s.size()/2;
    for(ll i=0;i<limit;i++){
        if(s[i]=='(' && s[s.size()-i-1]==')'){
            ck=true;
        }
        else{
            ck=false;
            break;
        }
    }
    if(s[0]=='(' && s[s.size()-1]==')'){
        for(ll i=1;i+1<s.size();i=i+2){
        if(s[i]=='('&&s[i+1]==')'){
            ck=true;
        }
        else{
            ck=false;
            break;
        }
    }
    }
    if(ck){
        cout<< "NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }   
   }
    return 0;
}