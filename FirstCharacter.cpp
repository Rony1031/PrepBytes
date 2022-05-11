#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++){
      freq[s[i]-97]++;
    }
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(freq[s[i]-97]==1){
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }

  }
  return 0;
}