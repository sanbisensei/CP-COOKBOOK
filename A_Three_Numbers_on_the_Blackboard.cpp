#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    if(a+b<mx){
        c = a+b;
        cout<<c - mn<<endl;
    }
    else if(b+c<mx){
        a = b+c;
        cout<< a-mn<<endl;
    }
    else if(a+c<mx){
        b = a+c;
        cout<< b-mn<<endl;
    }
    else{
        cout<< mx-mn<<endl;
    }

    }
    return 0;
}