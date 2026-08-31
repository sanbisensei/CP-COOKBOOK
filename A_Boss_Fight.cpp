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
    int arr[n];
    set<int> set;
    for(int i = 0;i<n;i++){
         cin>>arr[i];
         set.insert(arr[i]);
    }

    int damage=0;
    
    unordered_map<int,int> hash;
    for (int i=1;i<=1000;i++) {
    hash[i]=0;
}
    for(int i=0;i<n;i++){
        if(set.size()==1 && n>1){
            damage=arr[0]+arr[1];
            break;
        }
        if(hash[arr[i]]<=2){
            damage+=arr[i];
        }
        hash[arr[i]]++;
    }
    cout<<damage<<endl;
    
   
}
    return 0;
}