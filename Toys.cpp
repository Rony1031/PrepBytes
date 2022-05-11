#include <bits/stdc++.h>
    using namespace std;

    int bag(int C, int V[], int H[], int n)  
    {  
    int i, w; 
    int K[n+1][C+1]; 
    for (i = 0; i <= n; i++) 
    { 
       for (w = 0; w <= C; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (V[i-1] <= w) 
                 K[i][w] = max(H[i-1] + K[i-1][w-V[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
    } 

     return K[n][C]; 
    }  
     int main()
     {


     int t;
     cin>>t;
     while(t--)
     {
      int n,c;
     cin>>n>>c;
     int v[n],h[n];
     for(int i=0;i<n;i++)cin>>v[i];
     for(int i=0;i<n;i++)cin>>h[i];

      cout<<bag(c,v,h,n)<<endl;;

       }    
     }