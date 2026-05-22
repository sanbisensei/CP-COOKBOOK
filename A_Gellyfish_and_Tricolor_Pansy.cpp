#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        int x = min(a,c);
        int y = min(b,d);
        if(x<y){
            cout<<"Flower"<<endl;
        }
        else{
            cout<<"Gellyfish"<<endl;
        }
    }    
    return 0;
}