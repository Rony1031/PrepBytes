#include <bits/stdc++.h>
  using namespace std;
  int countOfParallelograms(int x[], int y[], int N) 
{ 
    // Map to store frequency of mid points 
    map<pair<int, int>, int> cnt; 
    for (int i=0; i<N; i++) 
    { 
        for (int j=i+1; j<N; j++) 
        { 
            // division by 2 is ignored, to get 
            // rid of doubles 
            int midX = x[i] + x[j]; 
            int midY = y[i] + y[j]; 

            // increase the frequency of mid point 
            cnt[make_pair(midX, midY)]++; 
        } 
    } 

    // Iterating through all mid points 
    int res = 0; 
    for (auto it = cnt.begin(); it != cnt.end(); it++) 
    { 
        int freq = it->second; 

        // Increase the count of Parallelograms by 
        // applying function on frequency of mid point 
        res += freq*(freq - 1)/2 ;
    } 

    return res; 
} 
  int main()
  {
    //write your code here
    int n;cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    cin>>x[i]>>y[i];
    cout<<countOfParallelograms(x,y,n);
    return 0;
  }