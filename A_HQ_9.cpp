#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    string s;
    cin>>s;
    bool ck=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            ck=true;
            break;
        }
    }
    if(ck==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}