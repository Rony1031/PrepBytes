/*#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int count = 0;
    s[s.size()+1]='\0';
    for (int i = 0; i < s.size(); i++)
    {
      if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'n'))
      {
          count=0;
      }else{
        if ((s[i + 1] != 'a') || (s[i + 1] != 'e') || (s[i + 1] != 'i') || (s[i + 1] != 'o') || (s[i + 1] != 'u'))
        {
          cout << "NO" << endl;
          count = 1;
          break;
        }
      }
     
    }
    if (count == 0)
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}*/

 #include <string>
 #include <bits/stdc++.h>
using namespace std;
   
int main(){
   int t;
   cin>>t;
   while(t--){
  string s;
   cin>>s;
   bool romaji=true;
   int k=s.size();
   for(int i=0;i<(s.size()-1);i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='n'){
           continue;
       }
       else  if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='o' || s[i+1]=='i' || s[i+1]=='u'){
         continue;
       }
       else
        romaji= false;
   }
   if(romaji==true && (s[k-1]=='a' || s[k-1]=='e' || s[k-1]=='i' || s[k-1]=='o' || s[k-1]=='u' || s[k-1]=='n'))
     cout<<"YES"<<endl;
     else
      cout<<"NO"<<endl;
 
   }
    return 0;
}