#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int extgcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


int main(){
    int a = 55, b = 80, x, y;
    int g = extgcd(a, b, x, y);
    cout << "gcd = " << g << ", x = " << x << ", y = " << y <<endl;
    cout << "check: " << a * x + b * y <<endl; 
    return 0;
}