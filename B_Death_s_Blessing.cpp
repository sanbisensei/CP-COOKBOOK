#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
 int t;
 cin >> t;
 while(t--){
        int n;
    cin>>n;
    vector<ll> a(n);
    vector<pair<ll,ll>> b;
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        b.push_back({x,i});
    }
    sort(b.begin(),b.end());
    ll time=0;
    for(int i=0;i<n;i++){
        int idx = b[i].second;
        time = time + a[idx];
        if(idx==0){      
            if(n>1){
                a[idx+1] = a[idx+1]+ b[i].first;
            }
        }
        else if(idx==(n-1)){
            a[idx-1] = a[idx-1]+b[i].first;
        }
        else{
            a[idx+1] = a[idx+1]+ b[i].first;
            a[idx-1] = a[idx-1]+b[i].first;

        }
    }

    cout<<time<<endl;
 }
    return 0;
}