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
    int k;cin>>k;
    vector<int> kv(k);
    vector<int> nv(n);
    vector<int> ans;
    for(int i=0;i<k;i++) cin>>kv[i];
    for(int i=0;i<n;i++) cin>>nv[i];

    int cnt=0;
    for(int i=0;i<n;i++){
        if(nv[i]<k+1){
            ans.push_back(nv[i]);
            int diff = (k+1)- nv[i];
            cnt+=diff;
            
        }
    }
    cout<<cnt<<endl;
    for(int x:ans){

        cout<<x<< " ";
    }
    cout<<endl;
    }
    return 0;
}
