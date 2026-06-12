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
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end(), greater<int>());

    

    if(n==2){
        cout<<arr[0]<< " "<<arr[1]<<endl;
    }
    else{
        bool c = true;
    for(int i=2;i<n;i++){
        if(arr[i-2]%arr[i-1] == arr[i]){
            c = true;
        }
        else{
            c= false;
            break;
        }
    }
        if(c==true){
            cout<<arr[0]<< " "<<arr[1]<<endl;
        }
        else{
            cout<< -1<<endl;
        }
    }
    }

    return 0;
}