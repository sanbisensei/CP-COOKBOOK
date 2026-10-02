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
    vector<ll> v(n);
    set<ll> s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    } 
    int consequtive=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            if(v[i+1]==0 || i==n-1){
                consequtive++;
            }   
        }
    }

    if(s.size()==1 && v[0]==0){
        cout<<0<<endl;
    }
    else if(s.size()==1){
        cout<<1<<endl;
    }
    else if(consequtive==1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    }

    return 0;
}