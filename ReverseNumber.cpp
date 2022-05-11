#include <iostream>
using namespace std;
int main(){
    int n;
    int reverse=0;
    cin>>n;
    while(n>0){
        int remainder;
        remainder=n%10;
        reverse=reverse*10 + remainder;
        n=n/10;

    }
    cout<<reverse<<endl;
return 0;
}