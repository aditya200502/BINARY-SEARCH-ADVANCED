#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
            end=mid-1;
        else
            start=mid+1;
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
            end=mid-1;
        else
            start=mid+1;
    }
    return ans;
}
int main()
{
    int arr[10]={2,3,3,3,3,3,3,4,5,11};
    int ans;
    ans=lastoccurence(arr,10,3)-firstoccurence(arr,10,3)+1;
    cout<<"the number of occurence of 3 is ::"<<ans;
    return 0;
}