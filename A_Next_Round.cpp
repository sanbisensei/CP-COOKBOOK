#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int c=0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            break;
        }
        else{
            if(arr[i]>=arr[k-1]){
            c++;
        }
        }
        
    }
    cout<< c<<endl;
    return 0;
}