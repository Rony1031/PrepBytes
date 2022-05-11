//n^1/2 time
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int phiFactor(int n){
    int result=n;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
            result=result -result/i;
            }
            
        }
    }
    if(n>1){
        result=result-result/n;
    }
    

    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<phiFactor(n);
return 0;
}


//counting coprime numbers from 1 t0 n wrt n //

//n*logn time 
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int GCD(int a,int b){
  if(b==0)
   return a;
   else
   return GCD(b,a%b);
}
int main(){
    int n;
    cin>>n;
    int count=1;

    for(int i=2;i<n;i++){
        if(GCD(i,n)==1){
            count++;
        }
    }
    cout<<count<<endl;

return 0;
}*/
