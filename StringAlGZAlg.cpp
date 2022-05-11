//Z-Algorithm
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void createZarr(string st,int z[]){
    int n=st.length();
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(i>r){
            l=i;
            r=i;
            while(r<n && st[r-l]==st[r])
              r+=1;
            z[i]=r-l;
            r-=1;
        }
        else{
            int k=i-l;
            if(z[k]< r-i+1)
              z[i]=z[k];
            else{
                l=i;
            while(st[r-l]=st[r] && r < n )
               r+=1;
            z[i]=r-l;
            r-=1;
            }
        }
    }
}

void z_algo(string text,string pattern){
   int n=pattern.length();
   string st=pattern.append("$").append(text);
   int len=st.length();
   int z[len];
   memset(z,0,sizeof(z));
   createZarr(st,z);
   
   for(int i=0;i<len;i++){
      if(z[i]==n){
          cout<<"Pattern found at index= "<<i-(n+1)<<"\n";
      }
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string text,pattern;
        cin>>text>>pattern;
        z_algo(text,pattern);
    }
return 0;
}