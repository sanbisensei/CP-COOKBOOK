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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=mx){
            c++;
            mx=max(arr[i],mx);
        }

    }
    cout<<c<<endl;
    
        }
    return 0;
}