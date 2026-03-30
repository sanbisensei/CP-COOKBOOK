#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<long long int> odd;
    vector<long long int> even;
    for (long long int i = 1; i <=n ; i++)
    {
        if(i%2!=0){
            odd.push_back(i);
        }
        else{
            even.push_back(i);
        }
    }
    
    vector<long long int> c;
    
    for (long long int x : odd) c.push_back(x);
    for (long long int x : even) c.push_back(x);

    cout << c[k-1] << endl;
    
    return 0;
}