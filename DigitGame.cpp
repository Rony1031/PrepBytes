#include<bits/stdc++.h>
     using namespace std;
    vector<int> num;

     int main()
    {
    int t,n,m,count,a,b;
    scanf("%d",&t);
    string str;
    for(int c=1; c<=t; c++)
    {
      cin>>str;
      cin>>m;
      n=str.length();
        for(int i=0; i<n; i++)
            num.push_back((int)str[i]-48);
        count=0;
        while(count<m)
        {
            for(int i=0; i<num.size()-1; i++)
            {
                if(num[i]<num[i+1])
                {
                    num.erase(num.begin()+i);
                    count++;
                    break;
                }
                else if((i+1==num.size()-1) && num[i]>=num[i+1])
                {
                    num.erase(num.begin()+i+1);
                    count++;
                    break;
                }
            }
        }
        for(int i=0; i<num.size(); i++)
            printf("%d",num[i]);
        printf("\n");
        num.clear();
    }
      }