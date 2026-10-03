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
    if(n < 4 || n % 2 != 0){
        cout<< -1 <<endl;
    }
    else{
        vector<ll> ans(2,1);
            if(n>=6){
                ans[0]=((n+5)/6);
            }
            
        
            if(n>=4){
                ans[1]=(n/4);
            }   
            

        for(ll x:ans){
        cout<< x<<" ";
        }
        cout<<endl;
    }

    
    }
    return 0;
}