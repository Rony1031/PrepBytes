#include <iostream>
using namespace std;

#define fl(i, a, b) for (long long i = a; i < b; i++)

long long maxProfit(long long *prices, long long size)
{

    long long maxProfit = 0;

    fl(i, 1, size) if (prices[i] > prices[i - 1]) maxProfit += prices[i] - prices[i - 1];
    return maxProfit;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long price[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> price[i];
        }

        cout << maxProfit(price, n) << endl;
    }

    return 0;
}
