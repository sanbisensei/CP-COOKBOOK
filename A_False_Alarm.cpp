#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;cin>>n>>x;
    int f=0;
    int l=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            f =i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            l =i;
            break;
        }
    }
    int c = l-f+1;
    if(x>=c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    }
    return 0;
}