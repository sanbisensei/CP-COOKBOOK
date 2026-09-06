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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int fidx = -1;
    int lidx = -1;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            if(fidx == -1) fidx = i;
            lidx = i;
        }
    }
    
    if(fidx != -1 && a[fidx] == -1) a[fidx] = 1;
    if(lidx != -1 && a[lidx]== -1) a[lidx] =1;

    for(auto it : a){
        if(it == -1) cout << 0 <<" ";
        else cout<< it <<" ";
    }
    cout<< endl;
        
    }

    return 0;
}