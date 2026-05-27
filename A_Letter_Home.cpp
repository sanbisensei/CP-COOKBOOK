#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n,s;cin>>n>>s;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(s-arr[0]<=arr[n-1]-s){
        ans = abs((s-arr[0]))+abs((arr[n-1]-arr[0]));
    }
    else{
        ans = abs((s-arr[n-1]))+abs((arr[n-1]-arr[0]));
    }
    cout<<ans<<endl; 
    }
    return 0;
}
