#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
   int t;
   cin >> t;
   while(t--){
        string s;cin>>s;

    int cz=0;int co=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0') cz++;
        else co++;
    }
    int lengthOfT =0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && co>0){
        co--;
        lengthOfT++;
        }
        else if(s[i]=='1' && cz>0){
            cz--;
            lengthOfT++;
        }
        else{
            break;
        }
    }
    cout<< s.size()-lengthOfT<<endl;
   }
    return 0;
}