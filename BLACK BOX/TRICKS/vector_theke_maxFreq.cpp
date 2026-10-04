#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    vector<int> v = {2, 2, 2, 3, 5};

unordered_map<int, int> freq;

int mx = 0;

for(int x : v){
    freq[x]++;
    mx = max(mx, freq[x]);
}

cout << mx; // 3
    return 0;
}