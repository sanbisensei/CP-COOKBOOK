#include <bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
        int n,k;cin>>n>>k;
    vector<int> arr(n);
    
    bool c=true;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> copy_arr=arr;
    sort(copy_arr.begin(),copy_arr.end());

    if(arr==copy_arr || k>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
    

    return 0;
}