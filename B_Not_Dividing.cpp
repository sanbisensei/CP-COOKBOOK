#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int counter = n*2;
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            if(v[i]%2==0 && v[i+1]%2==0){
                ans.push_back(v[i]+1);
            }
            if(v[i]%2!=0 && v[i+1]%2!=0){
                ans.push_back(v[i]+1);
            }
            else{
                ans.push_back(v[i]);
            }
        }
        else{
            ans.push_back(v[i]);
        }
    }


    for(int x: ans){
        cout<< x<< " ";
    }
    cout<<endl;
    return 0;
}