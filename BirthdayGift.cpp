/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
     while (t--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int sum = 0;
            int d=((b-a)/c+1);
             for (int i = 1; i <=d; i++)
                {
                    sum = a + c;
                    a = a + c;
                    if (sum == b)
                    {                                       
                        cout << "YES" << endl;
                        break;
                    }
                    if(sum!=b && i==d){
                        cout<<"NO"<<endl;
                    }
                    
                }
        }

    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
     while (t--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int sum = 0;
              if((b-a)%c==0){
                cout<<"YES"<<endl;
              }else{
                cout<<"NO"<<endl;
              }
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
            int a, b, c;
            cin >> a >> b >> c;
           if(a==b){
             cout<<"YES"<<endl;
           }
           else if(a>b && c>0){
             cout<<"NO"<<endl;
           }
           else if(a<b && c<0){
             cout<<"NO"<<endl;
           }
           else if(c==0){
             cout<<"NO"<<endl;
           }
           else if(a>b &&(a-b)%c==0){
             cout<<"YES"<<endl;
           }
           else if(b>a &&(b-a)%c==0){
             cout<<"YES"<<endl;
           }else{
             cout<<"NO"<<endl;
           }
        }

    return 0;
}