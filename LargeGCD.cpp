#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long gcd(long long a,long long b){
     if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        string m;
        long long n;
        cin>>n>>m;
        long long M;
        long long digit=0;
        for(int i=0;i<m.size();i++){
            int r=m[i]%10;
            digit=(digit*10+r);
        }
        M=digit%n;

        cout<<gcd(n,M)<<endl;
     }
return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll gcd(ll a, ll b)
{
	if (!a)
		return b;
	return gcd(b % a, a);
}


ll reduceB(ll a, char b[])
{
	
	ll mod = 0;


	for (int i = 0; i < strlen(b); i++)
		mod = (mod * 10 + b[i] - '0') % a;

	return mod; 
}


ll gcdLarge(ll a, char b[])
{
	
	ll num = reduceB(a, b);

	
	return gcd(a, num);
}


int main()
{
	
	long long t;
	cin>>t;
	while(t--){
		ll a = 0;
    char b[200];
	cin>>a>>b;
	if (a == 0)
		cout << b << endl;
	else
		cout << gcdLarge(a, b) << endl;
	}

	return 0;
}*/