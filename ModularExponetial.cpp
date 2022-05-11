#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long modExponent(int a,int b,int m){
   if(a==0){
       return 0;
   }
   if(b==0){
       return 1;
   }
   long long result;
   if(b%2==0){
       result=modExponent(a,b/2,m);
       result=((result%m)*(result%m))%m;
   }else{
       result=a%m;
       result=result*modExponent(a,(b-1),m);
   }
   return (((result%m)+m)%m);

}
int main(){
    int a,b,m;
    cin>>a>>b>>m;
    cout<<modExponent(a,b,m)<<endl;
return 0;
}