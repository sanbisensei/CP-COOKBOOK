#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n+1);
        vector<ll> evn;
        vector<ll> od;
    
        for (ll i =1; i<=n; i++)
    {
        cin>>arr[i];
        if(i%2 != 0){
            od.push_back(arr[i]);
        }
        else{
            evn.push_back(arr[i]);
        }
    }

    if(n %2){
        cout<<"NO"<<endl;
        continue;
       }
    
       ll mx = *max_element(evn.begin(),evn.end());
       
       ll mn = *min_element(od.begin(), od.end());

    
       if(mx<mn && (mx+2 <= mn)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    
    }

    return 0;
}
