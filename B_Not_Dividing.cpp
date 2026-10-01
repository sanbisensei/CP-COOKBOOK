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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        

    for(int i=0;i<n;i++){
        if(v[i]==1){
            v[i]++;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]%v[i-1]==0){
            v[i]++;
        }
    }
    

    for(int x: v){
        cout<< x<< " ";
    }
    cout<<endl;
    }
    return 0;
}