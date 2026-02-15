#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int sum=0;
    for(int i=1;i<=w;i++){
        sum = sum + (k*i);
    }
    if(sum<=n){
        cout<<0<<endl;
    }
    else{
        long long int left =0;
        left= sum - n;
        cout<<left<<endl;
    }
    
    return 0;
}