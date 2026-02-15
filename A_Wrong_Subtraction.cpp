#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;
    for(int i=1;i<=x;i++){
        if(n%10!=0){
         n = n-1;
        }
        else if(n%10==0){
         n = n/10;
        }
         
         
    }
    cout<<n<<endl;
    
    return 0;
}