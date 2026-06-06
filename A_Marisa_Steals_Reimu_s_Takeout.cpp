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
    vector<int> arr(n);
    int c=0;
    int cone=0;
    int ctwo=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%3==0){
            c++;
        }
        if(arr[i]%3==1){
            cone++;
        }
        if(arr[i]%3==2){
            ctwo++;
        }
    }
    int halua = (cone+ctwo)/2;
    cout<< c + halua <<endl;
}
    return 0;
}