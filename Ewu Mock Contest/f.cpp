#include <bits/stdc++.h>
using namespace std;

int main(){
    double h,r,w,l;cin>>h>>r>>w>>l;
    double pi = 3.141592653589793;
    double circle = (90.0/360.0)*(pi*(r*r));
    double trap = 0.5 * (l + h) * (w/2);
    trap = trap*2;
    cout<<fixed<<setprecision(15)<<(trap-circle)<<endl;
    return 0;
}