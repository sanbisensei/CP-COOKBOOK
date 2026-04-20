#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;cin>>s;
    ll size=s.size();
    ll q=0,w=0,e=0,r=0;
    for(int i=0;i<size;i++){
        if(s[i]=='1'){
            q++;
        }
        if(s[i]=='2'){
            w++;
        }
        if(s[i]=='3'){
            e++;
        }
        if(s[i]=='4'){
            r++;
        }
    }
    cout<<(a*q)+(b*w)+(c*e)+(d*r)<<endl;

    return 0;
}