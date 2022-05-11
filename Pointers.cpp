#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *itpr=&a;
    char c='b';
    char *cptr=&c;
    
    cout<<a<<endl;
    cout<<itpr<<endl;

    cout<<c<<endl;
    cout<<cptr<<endl;
    //Increment Operator
    itpr++;
    cptr++;
    cout<<itpr<<endl;
    cout<<cptr<<endl;

    //Decrement Operator
    itpr--;
    cptr--;
    cout<<itpr<<endl;
    cout<<cptr<<endl;

    //Addition and Subtraction
    itpr+2;//any costant add
    cptr+2;
    cout<<itpr<<endl;
    cout<<cptr<<endl;

    itpr-2;
    cptr-2;
    cout<<itpr<<endl;
    cout<<cptr<<endl;


return 0;
}