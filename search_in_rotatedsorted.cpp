#include<bits/stdc++.h>
using namespace std;
int findPosition(int arr[], int n, int k)
{
	int low=0,high=n-1;
	int mid=low+(high-low)/2;
	int pivot;
	while(low<high)
	{
		if(arr[mid]>=arr[0])
			low=mid+1;
		else
			high=mid;
		mid=low+(high-low)/2;
		pivot=low;
	}
	    low=0,high=n-1;
	    if(k>=arr[pivot] && k<=arr[high])
        {
            int start =pivot;
            int end=high;
            while(start<=end)
            {
                int mid1=(start+end)/2;
                if(arr[mid1]==k)
                    return mid1;
                else if(arr[mid1]>k)
                    end=mid1-1;
                else
                    start=mid1+1;
            }
        }
        else
        {
            int start =0;
            int end=pivot-1;
            while(start<=end)
            {
                int mid1=(start+end)/2;
                if(arr[mid1]==k)
                    return mid1;
                else if(arr[mid1]>k)
                    end=mid1-1;
                else
                    start=mid1+1;
            }
        }
    return -1;
}
int main()
{
    int arr[]={2,4,5,6,8,9,1};
    cout<<findPosition(arr,7,6);
    return 0;
}