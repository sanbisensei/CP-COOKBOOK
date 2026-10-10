#include <bits/stdc++.h>
using namespace std;
//mail_man will not rise
// ekdom mathar upor diye gese kinda
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
    string s;cin>>s;

    int ans =0;

    for(int k=0;k<4;k++){
        bool ok = true;


        for(int i=0;i<s.size();i++){
            char expected;

            if(k==0){
                expected = ((i/2)%2) ? '1' : '0';
            }
            else if(k==1){
                expected = (((i+1)/2)%2) ? '1' : '0';
            }
            else if(k==2){
                expected = (((i+2)/2)%2) ? '1' : '0';
            }
            else{
                expected = (((i+3)/2)%2) ? '1' : '0';
            }


            if(s[i] != '?' && s[i] != expected){
                ok = false;
                break;
            }
        }
        if (ok) ans++;
    }

    cout<<ans<<endl;
    }
    
    return 0;
}