#include <bits/stdc++.h>
  using namespace std;
  
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 

void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string o,f;
      cin>>o;
      cin>>f;
      string str1=f;
      string str2=f;
      leftrotate(str1,2);
      rightrotate(str2,2);
      if(str1==o || str2==o){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
    }
    
    return 0;
}