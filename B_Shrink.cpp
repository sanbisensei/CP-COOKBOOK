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
    arr[0]=1;
    arr[n-1]=2;
    
    for (int i=1;i<n-1;i++)
    {
     arr[i]=i+2;
    }
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
    }
    return 0;
}