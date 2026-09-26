#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> v(n);

    for(int i =0;i<n;i++) cin>>v[i];

  

    int sum=0;
    while(true){
        bool done = false;
        for(int i=0;i<n;i++){
        int g = __gcd(v[i],x);
        if(v[i]>0 && g!=1){
            sum += g;
            v[i]-= g;
            x=g;

            done = true;
            break;
        }
    }
if(!done) break;
    }
    
    cout<<sum<<endl;
    return 0;
}