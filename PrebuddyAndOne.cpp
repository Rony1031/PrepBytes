
#include <iostream>

using namespace std;

long long countSubStr(string str)
{
    long long m = 0;
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
            m++;
    }

    return m * (m - 1) / 2;
}

long long countone(string str, long long n)
{
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        if (str[i] == '1')
            count++;
    }

    return count;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string str;
        cin >> str;
        long long z = countSubStr(str) + countone(str, n);
        cout << z << endl;
    }
    return 0;
}
