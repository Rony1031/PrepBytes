#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,r1,r2,r3;
        cin>>m>>r1>>r2>>r3;
        if(m%4==0){
            cout<<"0"<<endl;
        }else{
            if((m+r1)%4==0){
                cout<<r1<<endl;
            
            }
            else if((m+2*r2)%4==0){
                cout<<r2<<endl;
                
            }
            else if((m+3*r3)%4==0){
                cout<<r3<<endl;
                
            }else{
                cout<<m<<endl;
            }
        }
    }
return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
 int main()
{long long t,n,r1,r2,r3;
  cin>>t;
  while(t--)
  {
    cin>>n>>r1>>r2>>r3;
    n%=4;
    if(n==0)
    cout<<"0\n";
    if(n==3) cout<<min(r1,min(r2+r3,r3+r3+r3))<<"\n";
    if(n==2) cout<<min(r2,min(r1,r3)*2)<<"\n";
    if(n==1) cout<<min(r3,min(r1+r2,r1+r1+r1))<<"\n";
  }
  return 0;
}*/