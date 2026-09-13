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
    int a=0,b=0;
    while(n%2==0){
         a++ ;
         n=n/2;
        }
    while(n%3==0){
         b++ ;
        n=n/3;
        }
      if(a>b || n!=1){
        cout<< -1 <<endl;
      } 
      else{
        cout<< b+(b-a)<<endl;
      }
    
    }
    return 0;
}