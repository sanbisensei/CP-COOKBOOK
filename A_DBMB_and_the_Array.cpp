#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,s,x;cin>>n>>s>>x;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    if(sum == s){
        cout<<"YES"<<endl;
    }
    else if(sum>s){
        cout<<"NO"<<endl;
    }
    else{
        bool f=false;
        for(int i=0;i<=100;i++){
            sum = sum+x;
            if(sum == s){
                f=true;
                break;
            }
            
        }
        if(f==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
    

    return 0;
}