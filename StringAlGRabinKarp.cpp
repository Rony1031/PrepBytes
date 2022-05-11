//Rabin-karp String Matching Algorithm
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
void Rabin_Karp_Algo(string text,string pattern,int d,int q){
    int n=text.length();
    int m=pattern.length();
    int h=((int)pow(d,m-1))%q;
    int p=0;  //hash of pattern
    int t[n-m+1]; //hash value of each m characters of the text
    memset(t,0,sizeof(t));
    for(int i=0;i<m;i++){
        p=(d*p + (pattern[i]-'a'))%q;
        t[0]=(d*t[0]+(text[i]-'a'))%q;
    }
    for(int s=0;s<n-m+1;s++){
        if(p==t[s]){
            if(charMatch(text,pattern,s,m)){
                cout<<"Pattern Match after "<<s<<" shifts"<<endl;
            }
        }
        if(s<n-m){
            t[s+1]=((d*(t[s]-(text[s]-'a')*h))+ text[s+m]-'a')%q;
        }
    }
}
int main(){
    string text,pattern;
    cin>>text>>pattern;
    int d=26;
    int q=1000000007;
    Rabin_Karp_Algo(text,pattern,d,q);
return 0;
}