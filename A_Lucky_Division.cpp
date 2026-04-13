#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool c=true;
    int x = stoi(s);
    for(int i=0;i<s.length();i++){
        if(s[i]!='4' && s[i]!='7'){
            c = false;
            break;
        }
    }
    if(c!=true){
        if(x % 4 == 0 || x % 7 == 0 || x % 44 == 0 || x % 47 == 0 ||
   x % 74 == 0 || x % 77 == 0 || x % 444 == 0 || x % 447 == 0 ||
   x % 474 == 0 || x % 477 == 0 || x % 744 == 0 || x % 747 == 0 ||
   x % 774 == 0 || x % 777 == 0){
            c= true;
        }
    }
    if(c==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}