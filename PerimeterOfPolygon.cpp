#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Point{

public:
    double x,y;
};

class Coordinates{

public:
  Point *points;
  Coordinates(int coordinate){
      points= new Point[coordinate];
  }
};

double distance(Point A,Point B){
    double d1=B.x - A.x;
    double d2=B.y - A.y;
    return sqrt(d1*d1 + d2*d2);
}


int main(){
    int n;
    cin>>n;
   Coordinates cod(n);
    for(int i=0;i<n;i++){
        cin>>cod.points[i].x;
        cin>>cod.points[i].y;
    }
    
    double sum=distance(cod.points[0],cod.points[n-1]);
    for(int i=0;i<n-1;i++){
      sum+=distance(cod.points[i],cod.points[i+1]);
    }
    
    cout<<fixed<<std::setprecision(3)<<sum<<endl;

return 0;
}