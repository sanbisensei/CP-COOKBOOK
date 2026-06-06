#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
// learned from imrancp496's solution
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
    vector<int> arr(n);
    int czero=0;
    int cone=0;
    int ctwo=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) czero++;
        if(arr[i]==1) cone++;
        if(arr[i]==2) ctwo++;
    }
    int ans = czero + min(cone,ctwo);
    int mn = min(cone,ctwo);
    cone -= mn;
    ctwo -= mn;
    cout<< ans+ cone/3 + ctwo/3 <<endl;

}
    return 0;
}