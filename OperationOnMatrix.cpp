#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, k, l;
    cin >> m >> n;
    int arr1[m][n];
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cin >> arr2[k][l];
        }
    }
    int sum[m][n];
    /*cout<<arr1[0][0]+arr2[0][0]<<" "<<arr1[0][1]+arr2[0][1]<<endl;
  cout<<arr1[1][0]+arr2[1][0]<<" "<<arr1[1][1]+arr2[1][1]<<endl;
  cout<<arr1[0][0]*arr2[0][0]+arr1[0][1]*arr2[1][0]<<" "<<arr1[0][0]*arr2[0][1]+arr1[0][1]*arr2[1][1]<<endl;
  cout<<arr1[1][0]*arr2[0][0]+arr1[1][1]*arr2[1][0]<<" "<<arr1[1][0]*arr2[0][1]+arr1[1][1]*arr2[1][1]<<endl;*/
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    int mult[m][n];
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
        {
            mult[i][j] = 0;
        }

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k = 0; k < n; ++k)
            {
                mult[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
        
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            {
                cout<< mult[i][j]<<" ";
                if (j == n - 1)
                    cout << endl;
            }
        }
    }
    return 0;
}