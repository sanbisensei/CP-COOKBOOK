#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y,z;
    cin>> n>>x>>y>>z;
    int hour=0;
    int hourai=0;
    for(int i=1;i<=100000;i++){
        
                int w = ((i*x)+(i*y*10))- (z*y*10);
            if(w >= n){
            hourai = i;
            break;
                        }
    }
    for(int i=1;i<=100000;i++){
            int w = (i*x)+(i*y);
        if(w >= n){
            hour = i;
            break;
        }
        
    }
    cout<<min(hour,hourai)<<endl;
    }
    return 0;
}