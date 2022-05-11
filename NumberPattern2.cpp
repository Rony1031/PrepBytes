#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i<=5;i++){
        for(int j=n;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=i;k>=1;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
return 0;
}