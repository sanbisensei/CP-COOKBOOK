#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
ll getSum(int n) {
    ll sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        ll x;cin>>x;
        ll c=0;
        for(ll i=x;i<=x+81;i++){
            if((i-getSum(i))==x){
                c++;
            }
        }

    cout<<c<<endl;
    }
    return 0;
}