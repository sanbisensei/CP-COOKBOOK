#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;cin>>n;
    for(int i=5;i>=1;i--){
        int steps = n/i;
        if(n%i!=0){
            steps++;
        }
        cout<<steps<<endl;
            break;
    }
    return 0;
}