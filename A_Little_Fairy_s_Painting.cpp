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
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    } 
    int ans=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(s.size()<=arr[i]){
            ans=arr[i];
            break;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}