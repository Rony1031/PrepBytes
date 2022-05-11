#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for (int i = n; i <= 5; i++)
    {
        for (int j = n; j <=(6-i); j++)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}