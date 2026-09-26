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
    int s=0;
    for(int i=0;i<n;i++){
        if(v[i]<=i+1)s++;
    }
    cout<<s<<endl;
    }
    return 0;
}