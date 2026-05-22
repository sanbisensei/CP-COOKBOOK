#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;cin>>n>>k;
    int arr[n];
    ll sum =0 ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0){
        cout<<"YES"<<endl;
    }
    else{

        if((n*k)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
    return 0;
}