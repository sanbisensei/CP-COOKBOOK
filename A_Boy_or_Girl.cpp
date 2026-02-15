#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    unordered_set<char> set;
    for(char x:s){
        set.insert(x);
    }
    if(set.size()%2==0){
        cout<< "CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}