#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    string s;
    cin>>s;

    if(s[0]=='W' && s[1]=='U' && s[2]=='B'){
            s.erase(0,3);
        }
    for(int i=0;i+2<s.size();i++){
        if(s.size() >= 3 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.erase(i,3);
            if(i > 0 && s[i-1] != ' '){
                s.insert(i, " ");
            }
        i--;
        }
    }

 

    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
   
    return 0;
}