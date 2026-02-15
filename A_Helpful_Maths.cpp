#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cone=0;int ctwo=0;int cthree=0;
    for(char i: s){
        if(i==1){
            cone++;
        }
        else if(i==2){
            ctwo++;
        }
        else if(i==3){
            cthree++;
        }
    }
    for(int i=0;i<cone;i++){
        cout<<"1"<<"+";
    }
    for(int i=0;i<ctwo;i++){
        cout<<"2"<<"+";
    }
    for(int i=0;i<cthree;i++){
        cout<<"3"<<"+";
    }

    return 0;
}