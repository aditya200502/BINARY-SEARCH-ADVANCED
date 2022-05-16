#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr,int n,int m,int mid)
{
    int pagesum=0;
    int studentcount=1;
    for(int i=0;i<n;i++)
    {
        if(pagesum +arr[i] <= mid)
            pagesum +=arr[i];
        else
            {
                studentcount ++;
                if(arr[i]>mid || studentcount > m)
                //Suppose mid is 5 and arr[i] is 25,then it would be wrong.
                    return false;
                pagesum =arr[i];
            
            }
    }
    return true;
}
int solution(vector<int> arr,int n,int m)
{
    int s=0;
    int e,sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    e=sum;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,4,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int>v={10,20,30,40};
    int m;
    cout<<"enter the value of m::";
    cin>>m;
    cout<<solution(v,4,m);
    return 0;
}