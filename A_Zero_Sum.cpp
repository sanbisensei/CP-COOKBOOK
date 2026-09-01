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
    bool possible = true;
    int a=0;
    int b=0;
    for (int i = 0; i < n; i++) cin>>arr[i];
    for (int i = 0; i < n; i=i+2)
    {
        if(n%2!=0){
            possible=false;
            break;
        }
        if(arr[i]==-1 && arr[i+1]==-1){
            a++;
        }
        if(arr[i]==1 && arr[i+1]==1){
            b++;
        }
    }
    if(possible==false){
        cout<<"NO"<<endl;
    }
    else{
        if(a==b){
            cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2==0){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0 && b%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    }
    
    return 0;
}