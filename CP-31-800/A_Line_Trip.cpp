#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
      int n,x;cin>>n>>x; 
      vector<int> milestone;
      int arr[n];
      milestone.push_back(0);
      for(int i = 0; i < n; i++){
          cin >> arr[i];
          milestone.push_back(arr[i]);
      }
      milestone.push_back(x);
      n = milestone.size();
      int maxval=-1;
      for(int i=1;i<n;i++){
        if(i==n-1){
            maxval = max(maxval,2*(milestone[i]-milestone[i-1]));
        }
        else{
            maxval = max(maxval,(milestone[i]-milestone[i-1]));
        }
      }
      cout<<maxval<<endl;
      
    }
    return 0;
}