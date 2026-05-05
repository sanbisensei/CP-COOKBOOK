#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
// learned it from imrancp496's solution
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y;cin>>x>>y;
        ll z = ((y/x)-1)*x;
    
    if(x<z && y>z && y%z!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}