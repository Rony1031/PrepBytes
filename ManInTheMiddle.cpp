#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void backtrack(string s,int i){
    if(i==s.length()){
        cout<<s<<endl;
        return;
    }
    
    char old;
    if(isalpha(s[i])){
        old=s[i];
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        else
            s[i]=toupper(s[i]);
        backtrack(s,i+1);
        s[i]=old;
    }
     backtrack(s,i+1);
}
int main(){
    string s;
    cin>>s;
    backtrack(s,0);
return 0;
}