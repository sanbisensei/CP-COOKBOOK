#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    string s;cin>>s;
    string c="";
    for(ll i=0;i<s.size();i++){
       if(s[i]=='.'){
        c+='0';
       }
       if(s[i]=='-' && s[i+1]=='.'){
        c+='1';
        i++;
       }
       if(s[i]=='-' && s[i+1]=='-'){
        c+='2';
        i++;
       } 
    }
    cout<<c<<endl;
    return 0;
}