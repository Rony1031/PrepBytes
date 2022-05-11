/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        cin >> n;
        for (int i = 1; i <= 5; i++)
        {
               if (n % 10 == 0)
            {

                break;
            }
            else
            {
                n = n * 2 * i;
                count++;
            }
            
        }
        cout << count<<endl;
    }

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        cin >> n;
        if(n%10==0){
          cout<<"0"<<endl;
        }
        else if(n*2%10==0){
          cout<<"1"<<endl;
        }
        else if(n*4%10==0){
          cout<<"2"<<endl;
        }
        else if(n*6%10==0){
          cout<<"3"<<endl;
        }
        else if(n*8%10==0){
          cout<<"4"<<endl;
        }else{
          cout<<"-1"<<endl;
        }
    }

    return 0;
}