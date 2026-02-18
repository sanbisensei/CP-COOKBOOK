#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;cin>>s;
    string rev="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'){
            s[i]='q';
        }
        else if(s[i]=='q'){
            s[i]='p';
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        rev=rev+s[i];
    }
    cout<<rev<<endl;
    }
    return 0;
}