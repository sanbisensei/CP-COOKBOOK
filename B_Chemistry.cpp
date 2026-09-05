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
    set<char> sett;
    for(int i=0;i<n;i++){
        hsh[s[i] - 'a']++;
        sett.insert(s[i]);
    }
    bool jora = false;
    int bejora = 0;
    int unique =0;
    for(int i=0;i<26;i++){
        if(hsh[i] != 0 && hsh[i]%2==0 ){
            jora = true;
        }
        else if(hsh[i]!=1 && hsh[i]%2!=0){
            bejora++;
        }
        else if(hsh[i]==1){
            unique++;
        }
    }
    if((n-k) %2==0){
        if(jora==true || (bejora==1 && k-unique==1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if((unique-k <= 1) || (jora==true && bejora==1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   }
    return 0;
}