#include <bits/stdc++.h>
using namespace std;

int swap(int &a,int &b){
   int temp = a;
    a = b;
    b = temp;
}

int x=0;
int y=0;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                y = j;
                x = i;
            }
            
        }
    }
    
    int ans = 0;
    ans = abs(2-x)+abs(2-y);
    cout<< ans << endl;

    return 0;
}