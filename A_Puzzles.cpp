#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];

    int ans=1e9;
    sort(v.begin(),v.end());
    for(int i=0;i+n-1<m;i++){
        
            int s = v[i+n-1]-v[i];
            ans = min(ans,s);
    }
    cout<<ans<<"\n";

    return 0;
}