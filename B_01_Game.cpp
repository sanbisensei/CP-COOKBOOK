#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
    cin>>n;

    int one =0;
    int zero=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='1'){
            one++;
        }
        if(n[i]=='0'){
            zero++;
        }
    
    }

    if(min(one,zero)%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
    }
    }
    return 0;
}