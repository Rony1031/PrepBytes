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

double dotProduct(Point A, Point B,Point C){
    double x1=B.x -A.x;
    double y1=B.y-A.y;
    double x2=C.x-A.x;
    double y2=C.y-A.y;

    return abs(x1*y1 +x2*y2);
}

double crossProduct(Point A, Point B,Point C){
    double x1=B.x -A.x;
    double y1=B.y-A.y;
    double x2=C.x-A.x;
    double y2=C.y-A.y;

    return (x1*y2 - x2*y1);
}

double areaOfPolygon(Coordinates cod,int n){
    double area=0;
    for(int i=1;i<n-1;i++){
        area+=crossProduct(cod.points[0],cod.points[i],cod.points[i+1]);
    }
    return abs(area/2);
}


int main(){
    int n;
    cin>>n;
   Coordinates cod(n);
    for(int i=0;i<n;i++){
        cin>>cod.points[i].x;
        cin>>cod.points[i].y;
    }
    cout<<"Area of Polygon= "<<areaOfPolygon(cod,n)<<endl;
    
return 0;
}