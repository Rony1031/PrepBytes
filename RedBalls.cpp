#include <bits/stdc++.h>
using namespace std;

long long modInverse(long long a, long long m)
{
    long long m0 = m;
    long long y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {

        long long q = a / m;
        long long t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }

    if (x < 0)
        x += m0;

    return x;
}

int main()
{
    long long Xg,Xr,Yg,Yr,Zg,Zr;
    cin>>Xg>>Xr>>Yg>>Yr>>Zg>>Zr;
    long long p=Xr*(Yg+Yr)*(Zg+Zr) + Yr*(Xr+Xg)*(Zr+Zg) + Zr*(Xr+Xg)*(Yg+Yr);
    long long q=3*(Xr+Xg)*(Yg+Yr)*(Zg+Zr);
    long long m=1000000007;
    long long Q=modInverse(q,m);
    cout << ((p % m) * (Q % m)) % m << endl;
    return 0;
}
