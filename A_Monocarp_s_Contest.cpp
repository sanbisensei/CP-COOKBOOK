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
    vector<int> hsh(100,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        hsh[v[i]]++;
    }

    if(n==2 && (v[0]==1 || v[n-1]==1)){
        cout<< -1 <<endl;
    }

    else{
        if(v[0]==1 && v[n-1]==1 && hsh[0]<=1) cout<< -1 <<endl;
        
        if(v[0]==1 && v[n-1]==0 && hsh[0]>=2) cout<< 1 <<endl;

        if(v[0]==1 && v[n-1]==0 && hsh[0]<2) cout<< -1 <<endl;

        if(v[0]==0 && v[n-1]==1 && hsh[0]>=2) cout<< 1 <<endl;

        if(v[0]==0 && v[n-1]==1 && hsh[0]<2) cout<< -1 <<endl;

        if(v[0]==0 && v[n-1]==0 ) cout << 0 <<endl;

        if(v[0]==1 && v[n-1]==1 && hsh[0]>1) cout<< 2 <<endl;
        
    }
    }
    return 0;
}