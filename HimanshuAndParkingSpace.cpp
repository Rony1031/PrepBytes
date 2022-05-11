//Jarvis Algorithm

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


bool crossProduct(Point P, Point Q,Point R){
    double x1=Q.x -P.x;
    double y1=Q.y-P.y;
    double x2=R.x-Q.x;
    double y2=R.y-Q.y;

    double value=(x1*y2 - x2*y1);

    return (value>0);
}

void convexHull(Coordinates cod,int n){
    vector<Point> conHull;
    int leftPoint=0;
    for(int i=1;i<n;i++){

        if(cod.points[i].x < cod.points[leftPoint].x)
           leftPoint=i;

    }

    int p=leftPoint;
    do{
        conHull.emplace_back(cod.points[p]);
        int q=(p+1)%n;
        for(int r=0;r<n;r++){
            
             if(crossProduct(cod.points[p],cod.points[q],cod.points[r]))
                 q=r;
        }
        p=q;
    }while(p != leftPoint);

    
    cout<<conHull.size()<<endl;
}


int main(){
    int n;
    cin>>n;
   Coordinates cod(n);
    for(int i=0;i<n;i++){
        int x,y;
	       cin>>x>>y;
        cod.points[i].x=x;
        cod.points[i].y=y;
    }
    
    convexHull(cod,n);

return 0;
}

