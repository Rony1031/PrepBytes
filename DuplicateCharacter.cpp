#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int freq[26] = {0};
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 97]++;
        }
        sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            
            if (freq[s[i] - 97] > 1)
            {
                cout << s[i] << "=" << freq[s[i] - 97] << " ";
                flag = 1;
                freq[s[i] - 97] = 0;
                
            }
           
        }
        if(flag==1){
            cout<<endl;
        }

        if (flag == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}