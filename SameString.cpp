#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int flag=1;
        int Max=1;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
                flag=1;
                Max=min(Max,flag);
            }else{
                flag=0;
                Max=min(Max,flag);
            }
        }

        if(Max==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
return 0;
}