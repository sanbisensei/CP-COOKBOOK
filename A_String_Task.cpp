#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    string ans ="";
    for(int i=0;i<s.size();i++){
       s[i]= char(tolower(s[i]));
        if(s[i]!='a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i]!='y'){
            ans = ans + s[i];
        }

        
    }
    for(char i : ans){
            cout<<"."<<i;
        }
        cout<<endl;
    return 0;
}