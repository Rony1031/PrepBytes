#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(char *str){
    if(*str){
      reverse(str +1);
      cout<<*str;
    }
}
int main(){
    char c[]="prep";
    reverse(c);

return 0;
}