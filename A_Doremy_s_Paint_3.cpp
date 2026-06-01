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
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    map<ll,ll> freq_map;
    for(int i=0;i<n;i++){
        freq_map[arr[i]]++;
    }
    if(freq_map.size()>=3){
        cout<<"NO"<<endl;
    }
    else{
        ll freq_1 = freq_map.begin()->second;
        ll freq_2 = freq_map.rbegin()->second;
        if(freq_1==freq_2){
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 && abs(freq_1-freq_2)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }

    return 0;
}