#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int res = 0;
        int i = 2;
        while (i <= n)
        {
            while (n % i == 0)
            {
                res += i;
                n /= i;
            }
            i++;
        }
        cout << res << endl;
    }
    return 0;
}