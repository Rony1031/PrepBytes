#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i =n-1; i>=0; i--)
        {
            if (arr[i] == 1)
            {
               flag=i;
               break;
            }
            else
            {
                flag=-1;
                
            }
        }
        if(flag==-1){
            cout<<"-1"<<endl;
        }else{
            cout<<flag<<endl;
        }
    }
    return 0;
}

