#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    double r1,r2,s1,s2;
    cin>>r1>>r2>>s1>>s2;
    double r=r2*s2-(r2-r1)*(s2-s1);

    cout<<fixed<<setprecision(6)<<((r1*s2)/r)<<endl;
return 0;
}