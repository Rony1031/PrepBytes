#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool charMatch(string text,string pattern,int s,int m){
      for(int j=0;j<m;j++){
          if(pattern[j]!=text[s+j])
              return false;
          
      }

      return true;
}

void Naive_String_Matching(string text,string pattern){
    int n=text.size();
    int m=pattern.size();
    for(int i=0;i<n-m+1;i++){
        if(charMatch(text,pattern,i,m)){
            cout<<"Pattern matches after "<<i<<" shifts\n";
        }
    }
}
int main(){
    string text,pattern;
    cin>>text>>pattern;
    Naive_String_Matching(text,pattern);
return 0;
}