#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,m;cin>>n>>k>>m;
    vector<int> ans;
    if(k>m){
        cout<<"NO"<<endl;
    }
    else{
        int count=k;
        for(int i=0;i<n;i++){
            if(count==k){
                ans.push_back(m-k+1);
                count--;
                continue;
            }
            if(count<k){
                ans.push_back(1);
                count--;
            }
            if(count==0){
                count=k;
            }
        }
        cout<<"YES"<<endl;
        for(int x:ans){
            cout<< x<< " ";
        }
        cout<<endl;
    }
    }
    return 0;
}