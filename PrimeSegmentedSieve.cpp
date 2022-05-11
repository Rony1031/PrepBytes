#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> calculateSieve(int n){
    int sieve[n];
    sieve[1]=0;
    for(int i=2;i<=n;i++){
        sieve[i]=1;
    }
    for(int i=2;i *i <=n;i++){
        if(sieve[i]==1){
            for(int j=i*i;j<=n;j=j+i)
                sieve[j]=0;
            
        }
    }
    vector<int> prime;
    for(int i=1;i<=n;i++){
          if(sieve[i]==1)
              prime.push_back(i);
          
    }
    return prime;

}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long l,r;
        cin>>l>>r;
        vector<int> prime=calculateSieve(sqrt(r));
        int size=r-l+1;
        int arr[size];
        for(int i=0;i<size;i++)
            arr[i]=1;
        
        for(int i=0;i<prime.size();i++){
            for(long long j=1;j<=r;j++){
                if(j==prime[i])
                    continue;
                
                if(j%prime[i]==0)
                    arr[j-l]=0;
                
            }
        }
        for(int i=0;i<size;i++){
            if(arr[i]==1){
                cout<<i+l<<" ";
            }
        }
    }

return 0;
}