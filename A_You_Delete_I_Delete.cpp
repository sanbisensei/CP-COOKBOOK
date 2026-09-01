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
        
    for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s.erase(i,1);
                break;
            }
        }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            s.erase(i,1);
            break;
        }
    }
     for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }  
    return 0;
}