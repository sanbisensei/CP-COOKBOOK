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
    int k;cin>>k;

    string s;cin>>s;
    vector<int> hsh(26,0);
    for(int i=0;i<n;i++){
        hsh[s[i] - 'a']++;
        
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(hsh[i]%2 != 0 ){
            cnt++;
        }
    }
   
    if(cnt>k+1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
  
    return 0;
}