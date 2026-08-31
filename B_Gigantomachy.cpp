#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
   
int t;
cin >> t;
while(t--){
            int n,m;cin>>n>>m;
    vector<int> arrn(n);
    vector<int> arrm(m);
    for(int i=0;i<n;i++){
        cin>>arrn[i];
    }
    for(int i=0;i<m;i++){
        cin>>arrm[i];
    }
    if((arrn[0]+n-1)>=arrm[0]+m-1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}


    return 0;
}