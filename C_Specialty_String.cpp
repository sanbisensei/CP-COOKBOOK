#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
    string s;cin>>s;
    bool hope=true;
    int i=0;
    while(hope!=false){
        hope = false;
       for(int i=0;i+1<s.size();i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            hope=true;
            break;
        }
        
       }
    }

    if(s.size()==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}