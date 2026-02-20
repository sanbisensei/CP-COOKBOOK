#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin>>n;
    string s;cin>>s;
    bool tinTaCellkiPashaPashi=false;
    int totalcount=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='.'&& s[i+1]=='.'&&s[i+2]=='.'){
            tinTaCellkiPashaPashi = true;
            break;
        }
        if(s[i]=='.'){
            totalcount++;
        }
    }
    if(tinTaCellkiPashaPashi){
        cout<<2<<endl;
    }
    else{
        cout<<totalcount<<endl;
    }
    }
    
    return 0;
}