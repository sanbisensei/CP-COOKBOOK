#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

      
        int c=0;
    for(int i=n-1;i>0;i--){
        while(v[i]<=v[i-1]){
            if(v[i-1]==0){
                c= -1;
                break;
            }
            v[i-1]=v[i-1]/2;
            c++;
        }
        
    }
        cout<<c<<endl;
    
    
    
    }
    return 0;
}