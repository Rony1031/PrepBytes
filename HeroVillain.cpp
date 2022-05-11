#include <bits/stdc++.h>
  using namespace std;
  
  long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 void solve()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        long long g=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            g=gcd(g,x);
        }
        
        long long out=0;
        for(int i=1;i*i<=g;i++)
        {
            if(g%i==0)
            {
                if(i!=g/i)
                    out+=2;
                else
                    out+=1;
            }
        }
        cout<<out<<"\n";
    }
}

int32_t main()
{
    solve();
}