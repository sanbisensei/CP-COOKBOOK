#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;cin>>n>>k;
    long long int mid = (n+1)/2;

    if(k<=mid){
        cout<<(2*k-1)<<endl;
    }
    else{
        cout<<(2*(k-mid))<<endl;
    }
    return 0;
}