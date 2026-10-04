#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int M;
    cin >> M;
    while(M--){
        string s;cin>>s;
    string t;cin>>t;
    int sizeS= s.size();
    int sizeT = t.size();

    vector<int> freqOfT(36,0);

    for(int i=0;i<sizeT;i++){
        freqOfT[t[i]-'A']++;
    }
    
    for(int i=sizeS-1;i>=0;i--){
        if(freqOfT[s[i]-'A']>0){
               freqOfT[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
    }

    string finalString = "";

    for(int i=0;i<sizeS;i++){
        if(s[i]!='.'){
            finalString+=s[i];
        }
    }

    if(finalString==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}