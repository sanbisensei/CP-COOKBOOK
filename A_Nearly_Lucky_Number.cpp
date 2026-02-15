#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;cin>>n;
    long long int lky=0;
    int dg = to_string(abs(n)).length();
    for(int i=1;i<=dg;i++){
      if(n%10 == 4 || n%10== 7){
        lky++;
    }
        n=n/10;
      
    }
    if(lky == 4 || lky == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}