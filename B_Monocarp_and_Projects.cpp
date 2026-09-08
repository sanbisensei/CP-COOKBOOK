#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        vector<long long> a(k);
        vector<long long> prefix(k + 1, 0);

        for (long long i = 0; i < k; i++) {
            a[i] = (y + i) % (x + i);
            prefix[i + 1] = prefix[i] + a[i];
        }

        cout << prefix[k] << endl;
    }

    return 0;
}