#include <bits/stdc++.h>
  using namespace std;
  
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size(), j = 0;
        vector<int> p(n);
        for (int i = 1; i < n; i++) {
            for (; j && s[i] != s[j]; j = p[j - 1]);
            p[i] = (j += s[i] == s[j]);
        }
        return s.substr(0, j);
    }
};
  
  int main()
  {
    //write your code here
    string s;
    cin>>s;
    Solution sr;
    cout<<sr.longestPrefix(s)<<endl;
    
    
    return 0;
  }