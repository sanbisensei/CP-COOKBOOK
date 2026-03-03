#include <bits/stdc++.h>
using namespace std;

// int main(){
//     long long int n;cin>>n;
//     long long int sum=0;
//     for(long long int i=1;i<=n;i++){
//         if(i%2==0){
//             sum = sum + i;
//         }
//         else{
//             sum = sum - i;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }
// GOT TLE here. coz they said 2^15 which is very big for o(n)



int main(){
    long long int n;cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        cout<< -(n+1)/2 <<endl;
    }

    return 0;
}


/*
odd hoile 0 to odd number sum korbe and rule is: even hoile (+) ar odd hoile (-) hobe.
>>> n/2 eita use korbo jokhon input even hobe .
>>> -(n+1)/2 eita use korbo jokhon input odd hobe .
*/