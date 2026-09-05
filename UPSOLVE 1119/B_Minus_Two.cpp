#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=0,c2=0,c3=0;
        for(int i=1;i<=n;i++){
            int c;
            cin>>c;
            if(c%2==1) c1++;
            if(c%4==0) c2++;
            if(c%4==2) c3++;
        }
        cout<<max({c1,c2,c3})<<endl;
    }
    return 0;
}