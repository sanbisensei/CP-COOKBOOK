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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int sum=0;

    vector<int> bad;
    for(int i=0;i<n;i++){
        if(v[i]!=i+1){
            bad.push_back(i);}
    }

    bool ck=true;
    int k = bad.size();
        for(int i=0;i<k;i++){
        if(v[bad[i]] != bad[k-1-i]+1){
            ck = false;
            break;
        }
    }

    cout<< (ck ? "YES\n" : "NO\n");
    
}

    return 0;
}