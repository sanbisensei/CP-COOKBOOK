#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        int arr[s];
        bool f=false;
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        for(int i=0;i<s;i++){
            if(arr[i]==67){
                f=true;
            }
        }
        if(f==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    
    return 0;
}