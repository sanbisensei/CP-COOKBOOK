#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;cin>>n;
    // if(n%2!=0){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     bool ck=false;
    //     ll b = n;
    //    for(int i=0;b>1;i++){
    //     b = b/2;
    //     if(b%2!=0 && b!=1){
    //         ck=true;
    //         break;
    //     }
    //    }
    //    if(ck)cout<<"YES"<<endl;
    //    else cout<<"NO"<<endl;
    // }

    while(n%2==0){
        n = n/2;
    }
    if(n>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    }
    return 0;
}