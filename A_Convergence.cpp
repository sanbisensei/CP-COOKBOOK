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
    map<int,int> m;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
        m[arr[i]]++;     
    }
    int hablu=0;
    if(s.size()!=n){
        hablu = 1;
        int maxf = 0;
    int target =0;
    for(auto i:m){
        if(i.second>maxf){
            maxf = i.second;
            target = i.first;
        }
    }
    arr.erase(remove(arr.begin(),arr.end(),target),arr.end());
    }
    int size = arr.size();
    if(size==1){
        cout<<1<<endl;
    }
    else{
        cout<<ceil(double(size/2))+hablu<<endl;
    }
    }
    return 0;
}