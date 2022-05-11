#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[n];
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            cin>>str[i];
            if(str[i]=='A'){
                count1++;
            }
            else if(str[i]=='D'){
                count2++;
            }
        }
       if(count1>count2){
           cout<<"Aditya"<<endl;
       }
       else if(count2>count1){
           cout<<"Danish"<<endl;
       }else{
           cout<<"AdiDan"<<endl;
       }

    }
return 0;

}