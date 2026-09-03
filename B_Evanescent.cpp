#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
//got help
// need more observation haki
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
    
    int n;cin>>n;
    string s;cin>>s;

    int ans=1;
    int x=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            ans++;
        }
        if(i == n-1){
            break;
        }
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            if(s[i+1]==s[i-1]){
                x=2;
            }
            else{
                x=max(x,1);
            }
        }
        
    }
    cout<<ans-x<<endl;
}
    return 0;
}