#include<bits/stdc++.h>
using namespace std;
// For first occurence move to left side after finding the element.Then continue with the same bs algorithm.
int firstoccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;//For moving left side end index needs to be decreased.
        }
        else if(arr[mid]>key)
            end=mid-1;
        else
            start = mid+1;
    }
    return ans;
}
//For second occurence move to right side after finding the element.Then continue with the same bs algorithm
int secondoccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            start=mid+1;//For moving right side start index has to be increased.
            ans=mid;
        }
        else if(arr[mid]>key)
            end=mid-1;
        else
            start = mid+1;
    }
    return ans;
}
int main ()
{
    int arr[6]={3,5,11,11,11,11};
    int ans1,ans2;
    ans1=firstoccurence(arr,6,11);
    ans2=secondoccurence(arr,6,11);
    cout<<ans1<<" "<<ans2;
    return 0;
}