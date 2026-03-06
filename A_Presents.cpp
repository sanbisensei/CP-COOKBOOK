#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    vector<int> ans;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
       ans.push_back(arr[i]);
    }
    
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    
    return 0;
}