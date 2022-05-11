#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        int count=0;
        cin>>num;
        while(num>0){
            int remainder;
        remainder=num%10;
        num=num/10;
        if(remainder==5){
            count++;
        }
        }
        
        cout<<count<<endl;
    }
return 0;
}