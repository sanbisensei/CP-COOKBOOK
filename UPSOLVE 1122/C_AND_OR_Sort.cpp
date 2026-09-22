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
    
    if(s[0]=='1'){
        int ck=0;
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                ck++;
            }
        }
        cout<<ck<<endl;
    }
    else{
        int ans = n;
        int rightzero=0;
        int leftone=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                rightzero++;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                leftone++;
            }
            else{
                rightzero--;
            }
            ans = min(ans,leftone+rightzero);
        }
        cout<<ans<<endl;
    }
    
    }
    return 0;
}