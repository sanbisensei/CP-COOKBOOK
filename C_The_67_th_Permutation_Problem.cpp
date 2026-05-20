#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        int m = n*3;
        vector<int> ans;
        int b=m;
        int s=1;
        for (int i = 0; i < m; i++)
        {
            if(i%3==0 or i%3==1){
                ans.push_back(b--);
            }
            else{
                ans.push_back(s++);
            }
        }
        
        
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
        
    }
    return 0;
}





// 