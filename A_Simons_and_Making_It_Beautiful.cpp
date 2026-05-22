#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    int mx = max_element(v.begin(), v.end()) - v.begin();
    swap(v[mx],v[0]);
    for (auto x : v) {
        cout<<x<<" ";
    }
    cout << endl;
    }

    return 0;
}