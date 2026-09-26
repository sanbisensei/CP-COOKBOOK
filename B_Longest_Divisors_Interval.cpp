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
    cin >> n;

    ll i =1 ;   
    while(n%i==0){
        i++;
    }

    cout<<i-1<<endl;


}


    return 0;
}