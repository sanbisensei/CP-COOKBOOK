#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string t;
    
    cin>>s>>t;
    bool sk=false;
    if(s.size()==t.size()){
        string rev="";
        for(int i=t.size()-1;i>=0;i--){
            rev=rev+t[i];
        }
        for(int i=0;i<t.size();i++){
            if(s[i]==rev[i]){
                sk=true;
            }
            if(s[i]!=rev[i]){
                sk=false;
                break;
            }
        }
        if(sk==true){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}