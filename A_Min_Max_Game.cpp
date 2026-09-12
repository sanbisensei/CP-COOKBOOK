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
    vector<int> v(n);
    vector<int> freq(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    if(freq[1]>=freq[0]){
        cout<<"Bessie"<<endl;
    }
    else{
        cout<<"Elsie"<<endl;
    }

    }
    return 0;
}