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
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2){
        cout<< -1<<endl;
    }
    else{
        vector<ll> v(n);
        v[0]=1;
        v[1]=2;
        v[2]=3;
        for(ll i=3;i<n;i++){
        v[i] = v[i-1]*2;
    }
    for(auto x:v){
        cout<<x<<" ";
        
    }
    cout<<endl;
    }
    
    
    }
    
    return 0;
}