#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int calculateNimSum(int pile[],int n){
    int nimSum=pile[0];
    for(int i=1;i<n;i++)
         nimSum=nimSum^pile[i];

    return nimSum;

}
int main(){
    int n;
    cin>>n;
    int pile[n];
    for(int i=0;i<n;i++){
        cin>>pile[i];
    }
    char playerFirst;
    cin>>playerFirst;
    int nimSum= calculateNimSum(pile,n);

    if(nimSum==0){

        if(playerFirst=='A'){
            cout<<"B will win"<<endl;
        }else{
            cout<<"A will win"<<endl;
        }
    }else{
        if(playerFirst=='A')
             cout<<"A will win"<<endl;

        else 
            cout<<"B will win"<<endl;
    }

return 0;
}