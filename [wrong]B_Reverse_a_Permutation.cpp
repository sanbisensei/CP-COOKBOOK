#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<int> rev(arr.begin(),arr.end());
        sort(rev.begin(), rev.end(), greater<int>());

        int right = n;
        int left = 0;

        for(int i=0;i<n;i++){
            if(arr[i]==rev[i] && arr[n-1]!=rev[n-1]){
                left++;
                reverse(arr.begin()+left,arr.begin()+right);
                break;
            }
            else if(arr[i]<rev[i]){
                reverse(arr.begin(),arr.begin()+right);
                break;
            }
        
           

        }
         for(int x: arr){
                cout<<x<<" ";
            }
            cout<<endl;
    }
    
    return 0;
}