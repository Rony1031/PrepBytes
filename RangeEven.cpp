//https://mycode.prepbytes.com/problems/recursion/EVODRE
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
  static int i=2;
  if(n<i){
    i=2;
    return;
  }
  cout<<i<<" ";
  i=i+2;
  solve(n);
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    solve(n);
    cout<<endl;
  }
  return 0;
}