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
    int k;cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   
    int ans=1e9;
    int c=0;
    
    for(int i=0;i<n;i++){
       if(v[i]%2==0){
        c++;
       }
       if(v[i]%k==0){
        ans = 0;
       }
       ans = min(ans, (k- (v[i]%k)));
    }
    
    if(k==4){
        if(c>=2){
            ans = min(ans,0);
        }
        else if(c==1){
            ans = min(ans,1);
        }
        else if(c==0){
            ans = min(ans,2);
        }
    }
    cout<<ans<<endl;

    }
    return 0;
}
