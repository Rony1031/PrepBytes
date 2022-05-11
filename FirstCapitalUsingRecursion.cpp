#include <bits/stdc++.h>
using namespace std;

int capital(string s,int i){

  if(s[i]=='\0')
     return -1;

  else if((s[i]-'A')>=0 && (s[i]-'A')<=25)
     return i;
  else
    i=i+1;
    return capital(s,i);
    
  
 return -1;
}

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<capital(s,0)<<endl;
    

  }
  return 0;
}