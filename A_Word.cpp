#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>90){
            lower++;
        }
        else if(int(s[i])<=90){
            upper++;
        }
    }
    if(upper>lower){
            for(char x:s){
                cout<<char(toupper(x));
            }
        }
        else{
            for(char x:s){
                cout<<char(tolower(x));
            }
        }
    
    return 0;
}