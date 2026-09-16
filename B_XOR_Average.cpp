#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
        int n;cin>>n;
    if(n%2==0){
        cout<< 1<<" ";
        cout<< 3<<" ";
        for(int i=0;i<n-2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<n<<" ";
        }
        cout<<endl;
    }
}

    return 0;
}