#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
int t;
cin >> t;
while(t--){
        int a,b,c;
    cin>> a>>b>>c;
    int cnt=0;

        for(int i=0;i<11;i++) {
            if(a==b || b==c || c==a){
        break;
    }
        else{

if (a>=b&&a>=c) a--;
else if (b>=a && b>=c) b--;
else c--;

if (a<=b && a<=c) a++;
else if (b<=a && b<=c) b++;
else c++;
cnt++;
        }
        }
        cout<<cnt<<endl;
   
}
 return 0;
}