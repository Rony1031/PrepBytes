#include <bits/stdc++.h>
     using namespace std;
     void solve(int nr, int dr) 
    { 
    if (dr == 0 || nr == 0) 
        return; 
    if (dr%nr == 0) 
    { 
        cout  << dr/nr <<" "; 
        return; 
    } 
    if (nr%dr == 0) 
    { 
        cout << "1/"<<nr/dr<<" "; 
        return; 
    } 
    if (nr > dr) 
    { 
        cout << "1/"<< nr/dr << " "; 
        solve(nr%dr, dr); 
        return; 
    } 

    int n = dr/nr + 1; 
    cout <<  n << " "; 
    solve(nr*n-dr, dr*n); 
    }     
     int main()
    {  


    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;

    solve(n,m);
    cout<<endl;
    }
    return 0;
    }