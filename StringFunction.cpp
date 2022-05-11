#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //begin()
    //end()
    //rbegin()
    //rend
    string str1="Rohan";
    string str2="Patil";
    string str3="Rohan Patil";
    string str4;

    string::iterator sit;
    cout<<"String using begin() and end()"<<endl;
    for(sit=str1.begin();sit!=str1.end();sit++){
        cout<<*sit;
    }cout<<endl;

    string::reverse_iterator rsit;
    cout<<"String using rbegin() and rend()"<<endl;
    for(rsit=str1.rbegin();rsit!=str1.rend();rsit++){
        cout<<*rsit;
    }cout<<endl;


    //copy()
    char ch[4];
    cout<<str1<<endl;
    str1.copy(ch,3,0);
    cout<<ch<<endl;
    
    //swap()
    str2.swap(str1);
    cout<<str1<<endl;
    cout<<str2<<endl;


    //string.find("string")
    //string.rfing("srting")
    //string.find_first_of("string")
    //string.insert(number,"string")
    //string.clear()
    //string.empty()===returns true or false
    string str5="rohan patil";
    cout<<str3<<endl;
    cout<<"first occurence of oh= "<<str3.find("oh")<<endl;
    cout<<"last occurence of oh= "<<str3.rfind("oh")<<endl;
    cout<<str3.find_first_of("oh")<<endl;
    str5.insert(0,"King ");
    cout<<str5<<endl;
    str5.clear();
    if(str5.empty()){
        cout<<"empty"<<endl;
    }else{
        cout<<"Non Empty"<<endl;
    }
    return 0;
}