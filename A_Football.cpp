#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    int c=1;
    for(int i=1;i<n.size();i++){
        if(n[i]==n[i-1]){
            c++;
            if(c>=7){
                break;
            }
        }
        else{
            c=1;
        }
    }

    if(c>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}