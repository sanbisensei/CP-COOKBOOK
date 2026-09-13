#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
   int t;
   cin >> t;
   while(t--){
       
        string s;cin>>s;
        int n= s.size();
        bool ck=false;
        int sum =0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='('){
                sum++;
            }
            if(s[i]==')'){
                sum--;
            }
            if(sum<0){
                ck=true;
                break;
            }
        }
    if(ck==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
      
   
   }
    return 0;
}