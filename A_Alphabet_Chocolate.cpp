#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    string s;
    cin>>s;
    if(s.size()%2 == 0){
        cout<< ":)"<<endl; 
    }
    else{
        int n = (s.size()-1)/2;
        cout<< s[n]<<endl;
    }
    return 0;
}