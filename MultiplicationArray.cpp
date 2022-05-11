#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int multi=1; 
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            multi=multi*arr[i];
        }
        cout<<multi<<endl;
    }
return 0;
}