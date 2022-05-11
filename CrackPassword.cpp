#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            for(int i=1;i<=9;i++){
                cout<<i<<endl;
            }
        }
        else if (n==2){
            for(int i=1;i<=9;i++){
                for(int j=1;j<=9;j++){
                    cout<<i<<j<<endl;
                }
            }
        }
         else if (n==3){
            for(int i=1;i<=9;i++){
                for(int j=1;j<=9;j++){
                    for(int k=1;k<=9;k++){
                        cout<<i<<j<<k<<endl;
                    }
                }
            }
        }
         else if (n==4){
            for(int i=1;i<=9;i++){
                for(int j=1;j<=9;j++){
                    for(int k=1;k<=9;k++){
                        for(int l=1;l<=9;l++){
                            cout<<i<<j<<k<<l<<endl;
                        }
                    }
                }
            }
        }
    }
return 0;
}