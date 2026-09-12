#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(c>0 && arr[i]<arr[i-1]){
            v.push_back(c);
            c=0;
        }
        c++;
    }
    if(v.empty()){
        cout<<c<<endl;
    }
    else{
        int mx = *max_element(v.begin(),v.end());
    cout<<max(c,mx)<<endl;
    }
    
    return 0;
}