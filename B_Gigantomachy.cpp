#include <bits/stdc++.h>
using namespace std;
//mail_man will rise
using ll = long long;
constexpr ll mod = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;cin>>n>>m;
    vector<int> arrn(n);
    vector<int> arrm(m);
    for(int i=0;i<n;i++){
        cin>>arrn[i];
    }
    for(int i=0;i<m;i++){
        cin>>arrm[i];
    }

    int mxn= *max_element(arrn.begin(), arrn.end());
    int mxm= *max_element(arrm.begin(), arrm.end());
    int mnm= *min_element(arrm.begin(),arrm.end());

    int sumn = accumulate(arrn.begin(), arrn.end(), 0);
    int summ = accumulate(arrm.begin(), arrm.end(), 0);

    if(n == 1 && m == 1){
        if(arrn[0]>=arrm[0]){
            cout<< 1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
        if(summ>sumn && (mxm-mnm>1)){
            cout<< 2<<endl;
        }
        else{
            cout<< 1<<endl;
        }
    }
    }

    return 0;
}