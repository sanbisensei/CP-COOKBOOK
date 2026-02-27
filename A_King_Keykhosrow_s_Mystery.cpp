#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;cin>>a>>b;
    for(int i=1;i<1000000;i++){
        if(i%a == i%b && (i>=a || i>=b) ){
            cout<<i<<endl;
            break;
        }
    }
    }

    
    return 0;
}