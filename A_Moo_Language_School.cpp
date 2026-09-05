#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
        int n,k;cin>>n>>k;

    string s;cin>>s;
    int ck = k;
    int one=0;
    int nd =0;
    for(int i=0;i<n;i++){
        ck--;
        if(ck<k){
            if(s[i]=='1'){
                one++;   
            }
        }
        if(ck==0){
            ck=k;
            if(one==k){
                nd++;
            }
            one=0;
        }
    }

    cout<<nd<<endl;
}
    return 0;
}