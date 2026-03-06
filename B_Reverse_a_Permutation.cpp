#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){

        int n;cin>>n;
        int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=0;i<n;i++){
            if(arr[i]<n-i){
                int j;
                for ( j=i+1;j<n;j++)
                {
                    if(arr[j]==n-i){
                        break;
                    }
                }
                while(i<j){
                    swap(arr[i++],arr[j--]);
                }
                break;
            }
        }
        
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
	}
	return 0;
}