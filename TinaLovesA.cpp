#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t-->0)
    {
        string s;
        cin >> s;
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 97]++;
        }

        int n = s.length() - freq[0];
        if (freq[0] > (s.length() / 2))
        {
            cout << s.length() << endl;
        }else
        {
            cout << freq[0]*2 -1<< endl;
        }
        
    }

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int T;
  cin>>T;
  while(T--)
  {
  cin>>str;
  sort(str.begin(),str.end());
  string ::iterator itr , itr2;
  itr = lower_bound(str.begin(),str.end(),'a');
  itr2 = upper_bound(str.begin(),str.end(),'a');
  int len = str.length();
  int no_a = itr2-itr;
  int rest = str.length()-no_a;

  if(no_a > rest)
  cout<<len<<endl;
  else
  cout<<no_a + (no_a - 1)<<endl;
  
  }
  return 0;
}*/
  