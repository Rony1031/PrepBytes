#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int extendedGCD(int a,int b,int *x,int *y){

    if(b==0){
        *x=1;
        *y=0;
        return a;
    }
    int x1,y1;   //each recursion x1 and y1
    int result=extendedGCD(b,a%b,&x1,&y1);
    *x=y1;
    *y=x1 - (a/b)*y1;

     return result;
}
int main(){
    //(a+b)%m=((a%m)+(b%m))%m;
    //(a-b)%m=((a%m)-(b%m))%m;
    //(a*b)%m=((a%m)*(b%m))%m;

    //(-A%m + m)%m   
    cout<<-7%3<<" Wrong"<<endl;
    cout<<(-7%3 +3)%3<<" Right"<<endl;

    //modular multipler inverse
    //if gcd(a,m)=1
    //(a*x)%m=1

    //worst case
    /*int a,m;
    cin>>a>>m;
    a=a%m;
    for(int x=1;x<m;x++){
        if((a*x)%m==1){  //for large case ((a%m)*(x%m))%m==1
            cout<<x<<endl;
            break;
        }
    }*/


    //extended euclidean algorithm
    /*int a,m,x=0,y=0;
    cin>>a>>m;
    a=a%m;
    int result=extendedGCD(a,m,&x,&y);
    if(result!=1){
        cout<<"MMI does not exist."<<endl;
    }else{
        cout<<"MMI of a w.r.t m "<<((x%m)+m)%m<<endl;
    }*/
     

     //Inverse of b
     int a,b,m,x=0,y=0;
    cin>>a>>b>>m;
    a=a%m;
    int result=extendedGCD(b,m,&x,&y);
    if(result!=1){
        cout<<"MMI does not exist so division not possible"<<endl;
    }else{
        int inverseB=((x%m)+m)%m;// a%m + inverseB%m
        cout<< ((a%m)*(inverseB%m))<<endl;
    }


return 0;
}