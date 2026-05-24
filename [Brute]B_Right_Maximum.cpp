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
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    while(!arr.empty()){
        int mx = *max_element(arr.begin(),arr.end());
        int idx =0;
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[i]==mx){
                idx = i;
                break;
            }
        }
        arr.erase(arr.begin()+idx,arr.end());
        c++;
    }

    cout<<c<<endl;
    }
    return 0;
}