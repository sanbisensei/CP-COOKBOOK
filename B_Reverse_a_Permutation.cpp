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
        
        vector<int> best = arr;
        
        for(int l=0; l<n; l++){
            for(int r=l;r<n;r++){
                reverse(arr.begin()+l,arr.begin()+r+1);
                
                if(arr > best){
                    best = arr;
                }
                reverse(arr.begin() + l, arr.begin() + r + 1);
            }
        }
        for(int x : best){
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}