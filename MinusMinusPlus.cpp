#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string t;
        cin >> s;
        cin >> t;
       int sn=s.size();
       int tn=t.size();
       int count=0;
       int j=0;
      for(int i=0;i<tn;i++){
           if(s[j]==t[i]){
             j++;
             continue;
           }else{
             if(t[i]=='+' &&(s[j]=='-'&&s[j+1]=='-')){
               j=j+2;
               continue;
             }else{
               count=1;
               break;
             }
           }
         }
       
      if(j!=sn){
        cout<<"NO"<<endl;
      }else{
        if(count==0){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
      }
    }

    return 0;
}