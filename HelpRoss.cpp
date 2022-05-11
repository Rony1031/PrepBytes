#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int count = 0;
        int r;

        string str={100,20,10,5,1};

        for(int i=0;i<5;i++){
                r = n /str[i];
                count = count + r;
                n = n % str[i];
        }
        
       
        cout << count << endl;
    }

    return 0;
}