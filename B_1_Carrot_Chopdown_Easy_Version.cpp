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
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> frq(m+1);
    for(int x:v) frq[x]++;
    
    vector<int> sfx(m+2);
    for(int i=m;i>=1;i--) sfx[i]=sfx[i+1]+frq[i];

    int ans=0;

    for(int i=0;i<=m;i++){
        int now = sfx[i];
        if(2*i<=m){
            now = now+frq[2*i];
        }
        ans = max(ans,now);
    }
cout<<ans<<endl;


}
    return 0;
}