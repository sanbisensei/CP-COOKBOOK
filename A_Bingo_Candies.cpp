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
        bool c=true;
    vector<ll> freq(100000+1,0);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            int x;cin>>x;
            freq[x]++;
            if(freq[x]>n*(n-1)) c=false;
        }
    }
        if(c==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
            }   
    return 0;
}