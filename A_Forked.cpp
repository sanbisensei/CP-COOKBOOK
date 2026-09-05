#include <bits/stdc++.h>
using namespace std;
//mail_man will not rise
// my brain is doomed
// not my solution
using ll = long long;
constexpr ll mod = 1e9+7;
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

int main(){
int t;
cin >> t;
while(t--){
        int a,b;cin>>a>>b;
    int kx,ky;cin>>kx>>ky;
    int qx,qy;cin>>qx>>qy;
    
    set<pair<int,int>> king_hits,queen_hits;
    
    for(int i=0;i<4;i++){
       king_hits.insert({kx+dx[i]*a, ky+dy[i]*b});
       king_hits.insert({kx+dx[i]*b, ky+dy[i]*a});

       queen_hits.insert({qx+dx[i]*a, qy+dy[i]*b});
       queen_hits.insert({qx+dx[i]*b, qy+dy[i]*a});
    }
    int ans =0;
    for(auto position : king_hits){
        if(queen_hits.find(position) != queen_hits.end()){
            ans++;
        }
    }
cout << ans <<endl;
}
    
    return 0;
}