/*
//Code from PrepbYtes //wrong code from video
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    int v,j;
    for(int i=1;i<n;i++){
        v=arr[j];
        j=i;

        while(j>=1 && arr[j-1]>v){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=v;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}*/

// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{   int n;
    cin>>n;

	int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}


