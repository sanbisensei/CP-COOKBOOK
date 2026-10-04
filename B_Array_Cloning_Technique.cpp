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
    vector<int> v(n);
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++) cin>>v[i];

    int mx = 0;
    for(int x: v){
        freq[x]++;
        mx = max(mx,freq[x]);
    }
    int ans=0;
    int unsame = n- mx;
    
    while(unsame>mx){
        ans = ans+(mx+1);
        unsame = unsame-mx;

        mx = mx+mx;
    }
    if(unsame == 0){
        cout<< 0<<endl;
    }
    else{
        cout<< ans+(unsame+1)<<endl;
    }
    
}
    return 0;
}