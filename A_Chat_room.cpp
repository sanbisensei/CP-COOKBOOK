#include <bits/stdc++.h>
using namespace std;

int main(){
     string s;
     cin>>s;
     int c=0;
     for (int i = 0; i < s.size(); i++)
     {
        if(c==0&& s[i]=='h'){
            c++;
        }
        else if(c==1&& s[i]=='e'){
            c++;
        }
        else if(c==2&& s[i]=='l'){
            c++;
        }
        else if(c==3&& s[i]=='l'){
            c++;
        }
        else if(c==4&& s[i]=='o'){
            c++;
        }
        
        
     }
     if((c-5)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     
    return 0;
}