#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  long long x,y;
  cin>>x>>y;
  long long result=log2(y/x);
  cout<<result+1<<endl;
  
  return 0;
}