#include<bits/stdc++.h>
using namespace std;
void SelectionSort()
{
    int temp[n];
	for(int i=0;i<n;i++)
	{
	    int mid=0;
	    for(int j=1;j<n;j++)
	    {
	        if(arr[j]<arr[mid])
	        {
	            mid=j;
	        }
	    }
	    temp[i]=arr[mid];
	    arr[mid]=INT_MAX;
	}
	for(int i=0;i<n;i++)
	{
	    cout<<temp[i]<<" ";
	}
}
void Selectionoptimization()
{
    for(int i=0;i<n;i++)
    {
        int mid=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid=j;
            }
        }
        swap(arr[i],arr[mid]);
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
	SelectionSort();
	 Selectionoptimization();
	return 0;
}