#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;cin>>n;
    vector<long long int> v(n);
    
    for(long long int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<long long int> sortedv(v.begin(),v.end());
    sort(sortedv.begin(),sortedv.end());

    vector<long long> pref(n), prefSorted(n);

    pref[0]=v[0];
    prefSorted[0]=sortedv[0];

    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+v[i];
        prefSorted[i]=prefSorted[i-1]+sortedv[i];
    }

    long long int questions;cin>>questions;
    for(long long j = 0; j < questions; j++){
    long long type,l,r;cin>>type>>l>>r;

    if(type == 1){
        if(l == 1){
            cout<<pref[r-1]<<endl;
        }
        else{
            cout << pref[r-1] - pref[l-2] << endl;
        }
    }
    else{
        if(l == 1)
            cout<<prefSorted[r-1]<<endl;
        else
            cout<<prefSorted[r-1]-prefSorted[l-2]<<endl;
    }
}
    
    return 0;
}