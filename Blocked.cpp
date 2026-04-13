#include <bits/stdc++.h>
using namespace std;

//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll &i:a) cin>>i;

        sort(a.rbegin(),a.rend());
        bool c = false;
        
        for(ll i =1;i<n;i++){
            if(a[i]==a[i-1]){
                cout<< -1 <<endl;
               c = true;
               break;
            }
        }
        if(c) continue;
        
        for(ll i:a){
            cout <<i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

