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
    int size=0;
    vector<int> p;
    bool flipped = false;
    for(int i=n-1;i>=0;i--){
        int cur = v[i];
        if(flipped){
            cur = -cur;
        }
        if(cur>0){
            p.push_back(i+1);
            size++;
            flipped=!flipped;
        }
    }
    cout<<size<<endl;
    for(int x:p){
        cout<<x<<" ";
    }
    cout<<endl;
   }
    return 0;
}