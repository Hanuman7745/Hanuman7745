#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void BubbleSort()
{    
	for(int i=0;i<n-1;i++)
	{
	    for(int j=0;j<n-1;j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            swap(arr[j],arr[j+1]);
	        }
	    }
	}
	for(int i = 0; i < n; i++)
	{
	    cout<<arr[i]<<" ";
	}
}
void BubbleSortoptimization()
{
    //Bubble Sort  optimization
    for(int i=0;i<n-1;i++)
    {
        int count =0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count=1;
            }
        }
        if(count == 0)
        {
            break;
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	BubbleSort();
	BubbleSortoptimization();
	return 0;
}