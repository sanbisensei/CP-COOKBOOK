#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,a;cin>>n>>m>>a;
    long long int iLove= ceil((double)n/a);
    long long int myPookie= ceil((double)m/a);
    cout<< iLove*myPookie<<endl;
    return 0;
}