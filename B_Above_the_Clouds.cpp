#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
// solution is not done by me
//but new jinish shikhsi :
// fr[26]{}; -> alphabet er frequency array banaisi
// fr[s[i]-'a']++; -> alphabet er frequency store kore
/**
 * fr[s[i]-'a']>1 eita check kortise j first ar last element chara 
 * bhetorer ekta element er frequency ki 1 er theke beshi ? 
 * jodi beshi hoy tahole first & last element e sure oi element ta exist kore. 
 */
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    int n;
    cin>>n>>s;
    bool c = false;
    int fr[26]{};
    for(int i=0;i<n;i++){
        fr[s[i]-'a']++;
    }
    for(int i=1;i<n-1;i++){
        if(fr[s[i]-'a']>1){
            c= true;
            break;
        }
    }

    if(c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}

