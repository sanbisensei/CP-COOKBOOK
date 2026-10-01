#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    

    if(n==1){
        cout<<v[0]<<endl;
    }
    // v[i+1] eikhane v[i]
    // v[i] eikhane v[i-1]

    for(int i=1;i<n;i++){
        if(v[i-1]==1){
            v[i-1]=v[i-1]+1;
        }
        if(v[i]<v[i-1]){
            continue;
        }
        if(v[i]==v[i-1]){
            v[i]=v[i]+2;
            v[i-1]=v[i-1]+1;
        }
        else if(v[i]%v[i-1]==0 && v[i]>v[i-1]){
            v[i]=v[i]+1;
            if(v[i-1]==1){
                v[i-1]=v[i-1]+1;
            }
        }
        
    }
    

    for(int x: v){
        cout<< x<< " ";
    }
    cout<<endl;
    return 0;
}