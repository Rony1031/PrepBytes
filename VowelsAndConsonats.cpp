#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>str;
        int count1=0;
        int count2=0;
        n=str.length();
        for(int i=0;i<n;i++){
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                count1++;
            }else{
                count2++;
            }
        }
        cout<<count1<<" "<<count2<<endl;

    }
return 0;
}