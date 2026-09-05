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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int i=0, j=n-1;

        bool f1=true, f2=true;

        while(i<n && a[i]!=-1){
            if(a[i]==1){
                f1=false;
            }
            i++;
        }

        while(j>=0 && a[j]!=-1){
            if(a[j]==1){
                f2=false;
            }
            j--;
        }

        if(i<=j){
            if(f1 && f2){
                a[i] = 1;
                a[j] = 1;
            }
            else if(!f1 && !f2){
                a[i] = 0;
                a[j] = 0;
            }
            else if(f1 && !f2){
                if(i==j){
                    a[i]=1;
                }
                else{
                    a[i]=1;
                    a[j]=0;
                }
            }
            else if(!f1 && f2){
                if(i==j){
                    a[i]=1;
                }
                else{
                    a[i]=0;
                    a[j]=1;
                }
            }

            for(int k=i+1;k<=j-1;k++){

                if(a[k]==-1){
                    a[k]=0;
                }
            }
        }
        for(int x : a){
            cout<<x<< " ";
        }
        cout<<endl;
    }

    return 0;
}