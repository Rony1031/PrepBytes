
#include <iostream>
using namespace std;

bool IsRedundantBraces(string A)
{

    int a = 0, b = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(' && A[i + 2] == ')')
            return 1;
        if (A[i] == '*' || A[i] == '+' || A[i] == '-' || A[i] == '/')
            a++;
        if (A[i] == '(')
            b++;
    }
    if (b > a)
        return 1;
    return 0;
}

int main()
{
    string A;
    cin >> A;
    if (IsRedundantBraces(A))
    {
        cout << "1\n";
    }
    else
    {
        cout << "0";
    }
}
