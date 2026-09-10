#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
 int t;
 cin >> t;
 while(t--){
      
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int> freq(m+1);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    vector<int> suffix(m+2);
    for(int i=m;i>=1;i--){
        suffix[i] = suffix[i+1]+freq[i];
    }

    int ans =0;

    for(int x=0;x<=m;x++){
        int now = suffix[x];

        if(2*x <=m){
            now+=freq[2*x];
        }
        ans = max(ans,now);
    }
    cout<<ans<<endl;
    
 }
    return 0;
}