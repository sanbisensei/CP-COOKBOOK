#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> hello(n);

    for(int i=0;i<n;i++){
        cin>> hello[i];
    }
    for(int x:hello){
        cout<< x<<endl;
    }
    
}