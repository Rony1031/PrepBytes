#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    double A1=y2-y1;
    double B1=x1-x2;
    double C1=A1*x1 + B1*y1;
    
    
    cin>>x1>>y1>>x2>>y2;

    double A2=y2-y1;
    double B2=x1-x2;
    double C2=A2*x1 + B2*y1;

    double det=A1*B2 - A2*B1;
    if(det==0)
       cout<<"Lines are parallel, there is no intersection point\n";
    else{
        double x=(B2*C1- B1*C2)/det;
        double y=(A1*C2 - A2*C1)/det;

        cout<<"Lines intersect at coordinate ("<<x<<","<<y<<")\n";
    }



return 0;
}