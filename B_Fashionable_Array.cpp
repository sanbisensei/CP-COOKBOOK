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

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> frq(101,0);
   
    for(int i=0;i<n;i++){
     frq[v[i]]++;
        
    }
    vector<int> ans;
    while(ans.size()<n){
        for(int i=100;i>=0;i--){
            if(frq[i]>0){
            ans.push_back(i);
            frq[i]--;
        }
        }
    }
    
    for(int x:ans){
        cout<< x<< " ";
    }
    cout<<endl;
   }
    return 0;
}