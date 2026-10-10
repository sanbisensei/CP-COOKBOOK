#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;cin>>a;
    int b;cin>>b;

    
    if(b>a && b-a>=2) cout<< -1 <<endl;
    else if(a==b) cout<< a<<endl;
    else if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) cout<< a <<endl;
    else if((a%2!=0 && b%2==0) || (a%2==0 && b%2!=0)) cout << a+1 <<endl;
    
    


    }

    return 0;
}