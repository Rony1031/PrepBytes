#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
        cin>>n;
        int arr[n];
        
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
        for(int i=1;i<=n;i++){
            if(arr[i]%2!=0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
return 0;
}