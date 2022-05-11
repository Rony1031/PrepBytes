#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int extendedGCD(int a,int b, int *x,int *y){
    if(b==0){
        *x=1;
        *y=0;
        return a;
    }
    int x1,y1;
    int result=extendedGCD(b,a%b,&x1,&y1);

    *x=y1;
    *y=x1 -(a/b)*y1;
    return result;
}
int main(){
    int a=56,b=21;
    int x=0,y=0;
    int result=extendedGCD(a,b,&x,&y);
    cout<<"GCD="<<result<<" "<<"x="<<x<<" "<<"y="<<y<<endl;

return 0;
}