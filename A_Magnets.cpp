#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int group=0;
    string s,prev = "";
    for(int i=0;i<n;i++){
        string boga;
        cin>> boga;
        if(boga!=prev){
            group++;
        }
        prev = boga;
    }
    cout<<group<<endl;
    return 0;
}