#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int sumarr(int n,int arr[]){
    if (n == 0) return 0;
    return arr[n-1] + sumarr(n-1,arr);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<< sumarr(n,arr);
    return 0;
}