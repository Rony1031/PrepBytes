#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n;
        long long int x;
        cin>>n;
        cin>>x;
        long long int result=x;
        for(long long int j=1;j<n;j++)
        {
            cin>>x;
            result=result^x;
        }
        if(result==0)
          cout<<"Friend"<<endl;
        else
          cout<<"Arnab"<<endl;
}
int main()
{  
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }

return 0;
}