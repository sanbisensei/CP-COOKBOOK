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
    int a[n];
    map<int,int> freq;
    for(int i=0;i<n;i++) cin>>a[i];

    int mx = *max_element(a, a+n);

    while(mx--){
        for(int i=0;i<n;i++){
            a[i] = abs(a[i]-2);
        }
    }
    for(auto x :a){
        freq[x]++;
    }
    int mxf=0;
    for(auto x:freq){
        mxf=max(mxf,x.second);
    }
    cout<<mxf<<endl;
    }
    return 0;
}