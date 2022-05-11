#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //resize
    //capacity

    cout<<str.capacity()<<endl;
    cout<<str<<endl;

    str.resize(10);
    cout<<str<<endl;
    
return 0;
}