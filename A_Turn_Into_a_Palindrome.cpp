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
    char alph;cin>>alph;
    string s;cin>>s;

    int c=0;
    int run=n/2;
    for(int i=0;i<run;i++){
        if(s[i]!=s[n-i-1]){
            if(s[i]==alph || s[n-i-1]==alph){
                c++;
            }
            if(s[i]!=alph && s[n-i-1]!=alph){
                c=c+2;
            }
        }
    }
    cout<<c<<endl;
    }
    return 0;
}