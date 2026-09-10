#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;
 
int main(){
  int t;
  cin >> t;
  while(t--){
        int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    
    int maxFreq = 0;
    vector<int> freqs;
    vector<int> chopped;
    for(int j=1;j<=m;j++){
        chopped.clear();
        for(int i=0;i<n;i++){
        if(v[i]<=j){
            chopped.push_back(v[i]);
        }
        else if(v[i]>j){
            int s = v[i]-j;
            chopped.push_back(s);
            chopped.push_back(j);
        }  
        
    }
    int freq = count(chopped.begin(), chopped.end(), j);
    maxFreq = max(maxFreq, freq); 
    freqs.push_back(maxFreq);
    }
    
    int mx = *max_element(freqs.begin(), freqs.end());
    cout<<mx<<endl; 
    
 
  }
    return 0;
}
