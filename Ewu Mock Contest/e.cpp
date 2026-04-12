#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end(), greater<int>());
        
        long long k = 0, d = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) k += a[i];
            else d += a[i];
        }
        
        if(k > d) cout << "Kobutor\n";
        else if(d > k) cout << "Diabetes\n";
        else cout << "Draw\n";
    }
    return 0;
}