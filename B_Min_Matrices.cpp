#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;cin>>n>>k;

    if(n>k){
        cout<<"-1"<<endl;
        continue;
    }
    if(k>(n*2)-1){
        cout<<"-1"<<endl;
        continue;
    }
    vector<vector<int>> v(n, vector<int>(n));
    int x=1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            v[i][j]=x;
            x++;
        }
        
    }
    
   
    int threshold = (n*2)-1;
    for(int i=0;i<n;i++){
        if(threshold>=k){
            swap(v[0][i],v[i][i]);
            threshold--;
        }
        else{
            break;
        }
    }
    

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    return 0;
}