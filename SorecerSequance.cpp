/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int  n;
        cin >> n;

        while (n >0)
        {
            cout << n << " ";
            if(n==1){
                break;
            }
            if (n % 2 == 0)
            {

                 n =(int)pow(n,0.5);
            }
            else
            {

                n = (int)pow(n,1.5);
            }
        }
        cout<<endl;
    }

    return 0;
}*/

/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n=11;
    int a=pow(n,0.5);
    int b=pow(n,1.5);
    cout<<a<<endl;
    cout<<b<<endl;
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void printJuggler(long long n)
{
	long long a = n;

	
	cout << a << " ";

	while (a != 1)
	{
		long long b = 0;

		if (a % 2 == 0)

			b = floor(sqrt(a));

		else

			b = floor(sqrt(a) *
					sqrt(a) * sqrt(a));

		cout << b << " ";
		a = b;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--){
	  long long n;
	  cin>>n;
	  printJuggler(n);
      cout<<"\n";
	}
	return 0;
}

