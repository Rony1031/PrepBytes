#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long int fact(int n){
    int r=1;

    long long int mod=1000003;
    if(n>=mod){
        mod=n;
    }
     for (int i = 1; i <= n; i++){
         r=(r*i)%mod;
     }
     return r;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n,k;
        cin >> n >> k;
        
        cout << fact(n)*k << endl;
    }
    return 0;
}
/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define MOD 1000003
#define MAXN 100000
#define MAXX 1000000000000000000LL
long long ar[MOD+1];
void init()
{
	ar[0]=1;
	for(int i=1;i<=MOD;i++)
		ar[i] = (ar[i-1]*(long long)i)%MOD;
}
int main()
{
	int T;
	long long N, A;
	init();
	cin >> T;
	while(T--)
	{
		cin >> N >> A;
		A = A % MOD;
		if(N>MOD)
			N = MOD;
		cout << (ar[N]*A)%MOD << endl;
	}
    	return 0;
}*/