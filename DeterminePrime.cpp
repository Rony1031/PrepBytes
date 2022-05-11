#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int flag=0;
        for(int i=2;i<=sqrt(n);i++){   //i*i<=n  //best approach
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
return 0;
}




/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
return 0;
}*/