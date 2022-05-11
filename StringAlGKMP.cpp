//Knuth-Morris-Pratt String- Maching Algorithm
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void COMPUTE_PREFIX_FUNCTION(string pattern,int arr[]){
    
    int m=pattern.length();
    int k=0;
    for(int q=1;q<m;q++){
        while(k>0 and pattern[k]!=pattern[q])
            k=arr[k];
        if(pattern[k]==pattern[q])
            k+=1;

        arr[q]=k;
    }
}
void KMP_Algo(string text,string pattern){
    int n=text.length();
    int m=pattern.length();
    int arr[m];
    memset(arr,0,sizeof(arr));
    COMPUTE_PREFIX_FUNCTION(pattern,arr);
    int q=0;
    for(int i=0;i<n;i++){
        while(q>0 and pattern[q]!=text[i])
          q=arr[q];
        if(pattern[q]==text[i])
          q+=1;
        if(q==m){
            cout<<"Pattern matches after "<<i-m<<" index\n";
            q=arr[q-1];
        }
          
    }
}
int main(){
    string pattern,text;
    cin>>text>>pattern;
    KMP_Algo(text,pattern);
return 0;
}