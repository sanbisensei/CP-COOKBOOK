#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    
int t;
cin >> t;
while(t--){
    int a,b;cin>>a>>b;
    ll x,y;cin>>x>>y;
    ll ans=0;
   if(a > b){

    if((a^1)==b){
        cout<<y<<endl;
    }
    else{
        cout<< -1 <<endl;
    }
    continue;
}
   else{
        while(a!=b){
            if(x<=y){
                ans+=x;
                a++;
            }
            else{
                if(a%2!=0){
                    ans+=x;
                    a++;
                }
                else{
                    ans+=y;
                    a++;
                }
            }
        }
        cout<<ans<<endl;
    }
   
   
}
    return 0;
}