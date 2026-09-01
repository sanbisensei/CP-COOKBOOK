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
    int arr[n];
    
    for(int i = 0;i<n;i++){
         cin>>arr[i];
    }

    unordered_map<int,int> freq;
    int maxFreq=0;
    int maxNum = arr[0];
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>maxFreq){
            maxFreq = freq[arr[i]];
            maxNum = arr[i];
        }
    }
    int other = n - maxFreq;
    if(other>=maxFreq){
       int sum = accumulate(arr,arr+n,0);
       cout<<sum<<endl; 
    }
    else{
        int cut = max(0,(maxFreq-2) - other);
        int sum = accumulate(arr,arr+n,0);
        cout<<sum - (maxNum*cut)<<endl;
    }
   }
    return 0;
}