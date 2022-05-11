#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<n;i++){
            int a=n%i;
            if(a==0){
                sum+=i;
            }
        }
        if(n==sum){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
    }
return 0;
}