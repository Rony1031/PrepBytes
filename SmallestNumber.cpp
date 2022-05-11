#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
        cin >> n;
        long long arr[n];
        long long freq[5000000];
        
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long k;
        cin>>k;
        sort(arr,arr+n);
        for (long long i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        
        for (long long i = 0; i < n; i++)
        {
            if (freq[arr[i]]==k)
            {
                cout << arr[i] << endl;
                break;
            }
        }
       

    return 0;
}