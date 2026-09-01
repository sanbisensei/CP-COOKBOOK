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
    vector<int> arr(n);
    vector<int> s6;
    vector<int> s3;
    vector<int> s2;
    vector<int> s1;

    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]%6==0){
            s6.push_back(arr[i]);
        }
        else if(arr[i]%3==0 && arr[i]%2!=0){
            s3.push_back(arr[i]);
        }
        else if(arr[i]%3!=0 && arr[i]%2==0){
            s2.push_back(arr[i]);
        }
        else{
            s1.push_back(arr[i]);
        }
    }
    for(int x:s6){
        cout<<x<<" ";
    }
    for(int x:s3){
        cout<<x<<" ";
    }
    for(int x:s1){
        cout<<x<<" ";
    }
    for(int x:s2){
        cout<<x<<" ";
    }
    cout<<endl;
    
    }
    return 0;
}