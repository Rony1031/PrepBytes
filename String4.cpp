#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string str1="Rohan";
    string str2="Patil";
    string str3="Rohan Patil";
    string str4;
     cout<<str1+str2<<endl;
     cout<<str3<<endl;
     
     str4=str1+str2;
     if(str3==str4){
         cout<<"Yes"<<endl;
     }else{
         cout<<"No"<<endl;
     }
     if(str1>str2){
         cout<<"str1>str2"<<endl;
     }else{
         cout<<"str1<str2"<<endl;
     }

return 0;
}