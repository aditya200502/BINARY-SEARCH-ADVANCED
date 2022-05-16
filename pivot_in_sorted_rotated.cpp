#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n)
{
    int low=0,high=n-1;
    int mid=low+(high-low)/2;
    while(low<high)
    {
        if(arr[mid]>=arr[0])    
        //pivot element won't be on this line as it repesents above line.
        {
            low=mid+1;
        }
        else
        //pivot element will be here.
        {
            high=mid;
            //high will not be mid-1 as value can be mid also and if we do mid-1 then it will shift to graph 1.
        }
        mid=low+(high-low)/2;
    }
    return low;
}
int main()
{
    int arr[]={7,9,1,2,3};
    cout<<"the index of pivot element is :: "<<pivot(arr,5)<<endl;
    cout<<"the element is::"<<arr[pivot(arr,5)];
    return 0;
}