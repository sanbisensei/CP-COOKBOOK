#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt[10] = {0};
    for(int i=0;i<n;i++){
        int a;cin>>a;
        cnt[(a-1)/10]++;
    }
    for(int i=0;i<10;i++){
        int lo = i*10+1, hi= i*10+10;
        cout<< lo << " - " << hi << ":";
        if(cnt[i]==0){
            cout<< endl;
            continue;
        }
        cout << " ";
        for(int j=1;j<=cnt[i];j++){
            if(j % 5 == 0){
                cout << "* ";
            }
            else{
                cout<<"|";
            }
            
        }
        cout<<endl;
    }

    return 0;
}

