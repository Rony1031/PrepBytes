#include <bits/stdc++.h>
using namespace std;
const string AR = "Nishant";
const string FR = "Friend";
string solve() {
    int n;
  string name;
  cin>>n>>name;
    bool st = (name == "Nishant"); 
    int in[n];
    for(int i = 0; i < n; ++i)
        cin>>in[i];
    if(n == 1)
        return in[0] % 2 ? FR : AR;
    if(st == (n % 2 == 0))
        return AR; 
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        if(in[i] % 2) {
            ++cnt;
            ++i; 
        }
    if(cnt >= (n + 1) / 2)
        return FR;
    return AR;
}
int main()
{  

  int t;
  cin>>t;
  while(t--)
  {
    cout<<solve()<<"\n";
  }

return 0;
}