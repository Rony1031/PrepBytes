//https://mycode.prepbytes.com/problems/recursion/MLOFDGT
#include <bits/stdc++.h>
using namespace std;

long long m=1000000007;
long long solve(long long n){
  if(n==0){
    return 1%m;
  }
  
  return (solve(n/10)*(n%10))%m;
}

int main()
{
  //write your code here
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    cout<<solve(n)<<endl;
  }
  
  return 0;
}