#include <bits/stdc++.h>
using namespace std;


long long countDivisibles(long long r, long long p, long long q)
{
   long long count=0;
   if(p<0 && q>0){
    count+=llabs(p/r)+llabs(q/r)+1;
  }else{
    p=abs(p);
    q=abs(q);
    if(p%r==0 || q%r==0){
      count+=(abs(q-p))/r+1;
    }else{
      count+=(abs(q-p)+1)/r;
    }


  }
  return count;
}


int main()
{

	long long t;
  cin>>t;
  while(t--){
    long long  r,p,q;
    cin>>r>>p>>q;
    cout << (countDivisibles (r, p, q))<<endl;;

  }
	

 return 0;
}


