#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='V'){
       for(int i=1;i<=5;i++){
           for(int j=1;j<=i;j++){
               cout<<j<<" ";
           }
           int n=(10-2*i);
           for(int k=1;k<=n;k++){
               cout<<"  ";
           }
          
           for(int j=i;j>=1;j--){
               cout<<j<<" ";
           }
           cout<<endl;
       }
    }
return 0;
}