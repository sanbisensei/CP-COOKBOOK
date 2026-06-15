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
    if(n==10){
        cout<< -1<<endl;
    }
    else{
        if(n%12==10){
            cout<<22<<" " <<n-22<<endl;
        }
        else{
            cout<< n%12<<" "<<n-(n%12)<<endl;
        }
    } 
    }
    return 0;
}