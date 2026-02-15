#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;cin>>s1>>s2;
    int a=0;
    for(char &x: s1){
        x = tolower(x);
    }
    for(char &x: s2){
        x = tolower(x);
    }


    for(int i=0; i<s1.size();i++){
        if(s1[i]<s2[i]){
           a = -1;
           break; 
        }
        else if(s1[i]>s2[i]){
            a = 1;
            break;
        }
    }
    cout<< a<<endl;

    return 0;
}


// 
/*ami break use kori ni first e, jar fole overwrite hoye gese test case 5 e.
s1=abdb , s2=aadb te b>a howay ans= 1 hoise but porer iteration e d=d howay abar
overwrite hoye gese.
*/ 

