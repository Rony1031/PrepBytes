#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int freq[s.length()]={0};
        int n=s.length();
        for(int i=0;i<n;i++){
            freq[s[i]-97]++;
        }

        for(int i=n-1;i>=0;i--){
            
           while(freq[s[i]-97]--){
               cout<<s[i];

           }

        }cout<<endl;


    }
return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

void sortString(string& str)
{
	
	int charCount[MAX_CHAR] = { 0 };

	
	for (int i = 0; i < str.length(); i++)

		
		charCount[str[i] - 'a']++;

	
	for (int i = MAX_CHAR - 1; i >= 0; i--)
		for (int j = 0; j < charCount[i]; j++)
			cout << (char)('a' + i);
}


int main()
{
	int t;
	cin>>t;
	while(t--){
	  string s;
	cin>>s;
	sortString(s);
	cout<<"\n";
	
	}
	return 0;
}*/

///Try to solve by userself

