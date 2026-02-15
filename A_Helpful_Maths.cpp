#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cone=0;int ctwo=0;int cthree=0;

    for(char i: s){
        if(i=='1'){
            cone++;
        }
        else if(i=='2'){
            ctwo++;
        }
        else if(i=='3'){
            cthree++;
        }
    }
   bool first = true;

        for(int i=0;i<cone;i++){
            if(!first) cout<<"+";
            cout<<"1";
            first = false;
            }
        for(int i=0;i<ctwo;i++){
            if(!first) cout<<"+";
            cout<<"2";
            first = false;
            }
        for(int i=0;i<cthree;i++){
            if(!first) cout<<"+";
            cout<<"3";
            first = false;
            }


    return 0;
}


