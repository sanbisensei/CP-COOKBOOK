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
    int c=0;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            c++;
        }
    }
    cout<<c<<endl;
    }
    return 0;
}