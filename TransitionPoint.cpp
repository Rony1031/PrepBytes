#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int FindOne(int arr[],int start,int end){
    if(start>end)
       return -1;

    int mid=start +(end-start)/2;

     if(arr[mid]==1 &&(mid==0 || arr[mid-1]==0))
     return mid;

     else if(arr[mid]==0)
     return FindOne(arr,mid+1,end);

     else
      return FindOne(arr,start,mid-1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<FindOne(arr,0,n-1)<<endl;
    }
return 0;
}




/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        for(long long i=0;i<n;i++){
            if(arr[i]==1){
                flag=1;
                cout<<i<<endl;
              
               break;
            }else{
                continue;
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
    }
return 0;
}*/