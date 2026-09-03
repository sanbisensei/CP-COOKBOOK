#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;cin>>n>>k;

    string s;cin>>s;

    if(2*k>n){
        cout<< -1 <<endl;
        continue;
    }

    int pigflip=0;

    for(int i=0;i<k;i++){
        if(s[i]=='L'){
            pigflip++;
        }
        if(s[n-i-1]=='R'){
            pigflip++;
        }
    }
    cout<<pigflip<<endl;
    }
    return 0;
}