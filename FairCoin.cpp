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
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long p = 3 * x;
        long long q = 3 * x + 4 * y;
        long long m = 1000000007;
        long long Q = modInverse(q, m);

        cout << ((p % m) * (Q % m)) % m << endl;
    }
    return 0;
}
