#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cout<<"GCD : "<< gcd(18,12)<<endl;
    cout<<"LCM : "<< (18*12)/gcd(18,12)<<endl;
    return 0;  
}