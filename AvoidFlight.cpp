//Try this Problem to solve.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int l = ar[n - 1] + 1;
    int freq[l];
    for (int i = 0; i < l; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
    {
        freq[ar[i]]++;
    }

    int mi = ar[0];
    int ma = ar[n - 1];
    int count = 0;

    while (abs(ma - mi) > k)
    {

        freq[mi]--;
        freq[mi + 1]++;
        freq[ma]--;
        freq[ma - 1]++;

        if (freq[mi] == 0)
        {
            mi = mi + 1;
        }
        if (freq[ma] == 0)
        {
            ma = ma - 1;
        }
        count++;
    }
    cout << count;
    return 0;
}