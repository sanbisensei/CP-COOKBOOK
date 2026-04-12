#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x;cin>>n>>k>>x;
        bool c = true;
        for (int i = 0; i < k; i++)
        {
            int a;
            cin>>a;
            if((a+x-1)/x>n){
                c = false;
            }
        }
        if(c==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}