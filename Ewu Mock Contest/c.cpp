#include <bits/stdc++.h>
using namespace std;

int main(){

    string s,d,f;cin>>s>>d>>f;
    if(s=="East" && d=="West" && f=="University"){
        cout<<"Correct"<<endl;
    }
    else{
        cout<<"Hallucination"<<endl;
    }
    return 0;
}