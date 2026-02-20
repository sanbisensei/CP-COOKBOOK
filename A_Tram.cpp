#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
int max=0;
int intrain = 0;
for(int j=0;j<t;j++){
    int n,m;cin>>n>>m;
    
        intrain = (intrain-n)+m;
        if(max<intrain){
            max=intrain;
        }
   
}
    cout<<max<<endl;
    
    return 0;
}