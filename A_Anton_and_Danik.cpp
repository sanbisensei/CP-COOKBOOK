#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    char arr[n];
    int a=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            a++;
        }
        else if(arr[i]=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(a==d){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    return 0;
}