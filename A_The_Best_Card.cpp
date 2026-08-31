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
  
        bool isP = true;
        for (int i = 2; i*i <= a+1; i++)
        {
            if((a+1)%i==0){
                isP = false;
                break;
            }
        }
        if(isP){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}