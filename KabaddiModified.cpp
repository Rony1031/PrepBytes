 #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
     //write your code here
     int t;cin>>t;
     while(t--)
     {
     string s;int k;
     cin>>s>>k;
     int n=s.length();
     int count=0;
     for(int i=0;i<s.length();i++)
    {if(s[i]=='1')
      {for(int j=max(0,i-k);j<=min(n-1,i+k);j++)
      {
        if(s[j]=='0')
        {
          count++;
          s[j]=-1;
          break;
        }
      }}
    }
    cout<<count<<"\n";
    }
    return 0;
    }