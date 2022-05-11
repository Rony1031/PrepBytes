#include <bits/stdc++.h>
  using namespace std;

  long long lastdigit(long long n){
      int ld=n%10;
      return ld;
  }
   long long firstdigit(long long n){
       int fd;
       while(n>0){
           fd=n%10;
           n=n/10;
       }

       return fd;
   }
  int main()
  {
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ld=lastdigit(arr[i]);
        int fd=firstdigit(arr[i]);

        if(ld==2 ||ld==3||ld==5||ld==7){
            if(fd==2 ||fd==3||fd==5||fd==7){
                 if(ld+fd>k){
                     cout<<"Yes"<<endl;
                 }else{
                     cout<<"No"<<endl;
                 }
            }else{
                cout<<"No"<<endl;
            }
        }
        else{
                cout<<"No"<<endl;
            }
    }
    
    return 0;
  }