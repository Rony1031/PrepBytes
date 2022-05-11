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
long long binaryExponentiation(long long a, long long b,long long m){
    long long result=1;
    while(b>0){
        if(b&1){
            result=(result*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return (result%m+m)%m;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long P=n;
        long long m = 1000000007;
        long long q=binaryExponentiation(2,n,m);
        
        long long Q = modInverse(q, m);

        cout << ((P % m) * (Q % m)) % m << endl;
    }
    return 0;
}
