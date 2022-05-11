#include<bits/stdc++.h>
#include<list>
#include<iostream>
using namespace std;

void display(list<int> list1){
    list<int> ::iterator itr;
    for(itr=list1.begin();itr!=list1.end();itr++){
        cout<<*itr<<" ";
    }

}
int main(){
    list<int> list1;//list of size 0
    list<int> list2(10);//list of size 10

    cout<<list1.size()<<endl;
    int x;
    for(int i=0;i<4;i++){
        cin>>x;
        list1.push_back(x);
    }
    cout<<list1.size()<<endl;
    display(list1);
    cout<<endl;

    list1.push_front(31);
    display(list1);
    cout<<endl;

    list1.pop_back();
    display(list1);
    cout<<endl;

     list1.pop_front();
    display(list1);
    cout<<endl;

     list1.reverse();
    display(list1);
    cout<<endl;

    list2=list1;
    list1.merge(list2);
    display(list1);

return 0;
}