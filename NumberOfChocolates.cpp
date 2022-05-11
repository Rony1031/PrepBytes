#include <bits/stdc++.h>
using namespace std;

int binaryIterativeSearch(long long arr[],long long low ,long long high,long long data){
    if(arr[high]<=data){
      return high+1;
    }
    
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>data && arr[mid-1]<=data){
            return mid;
        }
        else if(arr[mid]>data && arr[mid-1]>data){
            high=mid-1;
        }
        else if(arr[mid]<=data){
            low=mid+1;
        }

    }
    return -1;
}
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long q;
    cin >> q;
    while (q--)
    {
        long long x;
        cin >> x;
        cout<<binaryIterativeSearch(arr,0,n-1,x)<<endl;
    }

return 0;
}