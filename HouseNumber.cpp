#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll i,n,x,m,k,ans;
int main()
{
   int t;
   
   cin>>t;
   while(t--){
    cin >> n;
    ans=0;
    for(long long int i= 1 ; i <= n ; i= i*10){
          ans += (n- i+1);
      }
	    
	   cout << ans << endl;
   }
	return 0;
}

/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int digit=0;
        for(int i=1;i<=n;i++){
            int n=i;
            while(n>0){
                digit++;
                n=n/10;
            }
        }
        cout<<digit<<endl;
    }
return 0;
}*/

/*#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll i, n, x, m, k, ans=0;
int main()
{
    int t;
    cin >> t;
    
   for(int r=0;r<t;r++){
       
        cin >> n;
        x = n;
        while (x)
        {
            x /= 10;
            m++;
        }
        ans = n * m + m - 1;
        k = 1;
        for (i = 0; i < m - 1; i++)
        {
            k *= 10;
            ans -= k;
        }

        cout << ans << endl;
        
   }
    return 0;
}*/