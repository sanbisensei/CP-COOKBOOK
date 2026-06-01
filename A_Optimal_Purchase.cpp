#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,a,b;cin>>n>>a>>b;
        ll f = n/3;
        ll s = n-(f*3);
        if(a<b && n>=3){
            if(a*3<b*1){
            cout<<(n*a)<<endl;
        }
        else{
            cout<<(s*a)+(f*b)<<endl;
        }  
        }
        else if(n<=2){
            if(a*n < b){
                cout<<(a*n)<<endl;
            }
            else{
                cout<<b<<endl;
            }
            
        }
        else{
            cout<<(s*b)+(f*a)<<endl;
        }
    }
    return 0;
}