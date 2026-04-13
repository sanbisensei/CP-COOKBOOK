#include <bits/stdc++.h>
using namespace std;

int main(){
    string s= "77";
     bool c=true;
    int x = stoi(s);
    for(int i=0;i<s.length();i++){
        if(s[i]!='4' || s[i]!='7'){
            c = false;
            break;
        }
    }
    cout<<c;
    return 0;
}