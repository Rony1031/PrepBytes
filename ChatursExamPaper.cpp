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
        long long n = s.length();
        int count = 0;
        for (int i = 0; i < (n /2) ; i++)
        {
            count += abs(s[i] - (s[n -i-1]));
        }
        cout << count << endl;
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
      string paper;
      cin>>paper;
      int count = 0;
      int len = paper.length();
      char mod_paper[len+1];
      strcpy(mod_paper, paper.c_str());
      for(int i = 0 , j = len-1 ; i< len/2 ; i++ , j--)
      {
        while(mod_paper[i] != mod_paper[j])
        {
          if(mod_paper[i] > mod_paper[j])
          mod_paper[i]-=1;
          else
          mod_paper[j]-=1;
          count++;
        }
      }
        cout<<count<<endl;
      
    }
    return 0;
}*/