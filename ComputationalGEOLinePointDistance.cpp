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

    return abs(x1*y2 - x2*y1);
}

double distance(Point A,Point B){
    double d1=B.x - A.x;
    double d2=B.y - A.y;
    return sqrt(d1*d1 + d2*d2);
}

double linePointDistance(Coordinates cod, bool isLineSegement ){
   
   double dist=crossProduct(cod.points[0],cod.points[1],cod.points[2])/(distance(cod.points[0],cod.points[1]));
   if(isLineSegement){
        double dot1=dotProduct(cod.points[0],cod.points[1],cod.points[2]);
        if(dot1>0)
           return abs(distance(cod.points[1],cod.points[2]));

        double dot2=dotProduct(cod.points[1],cod.points[0],cod.points[2]);
        if(dot2>0)
           return abs(distance(cod.points[0],cod.points[2]));

   }

   return abs(dist);
}
int main(){
    int n;
    cin>>n;
   Coordinates cod(n);
    for(int i=0;i<n;i++){
        cin>>cod.points[i].x;
        cin>>cod.points[i].y;
    }
    
    cout<<linePointDistance(cod,false)<<endl;
    cout<<linePointDistance(cod,true)<<endl;

return 0;
}