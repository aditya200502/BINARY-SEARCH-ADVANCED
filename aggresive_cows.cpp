#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &v,int k,int mid)
{
    int cowcount =1;
    int lastpos=v[0];
    //it is done to fix position of one cow.
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-lastpos >= mid)
        {
            cowcount ++;
            if(cowcount == k)
                return true;
            lastpos=v[i];
        }
    }
    return false;
}
int solution(vector<int> &v,int k)
{
    sort(v.begin(),v.end());
    int s=0;
    int maxi=v[0];
    for(int i=0;i<v.size();i++)
    {
        maxi=max(maxi,v[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(isPossible(v,k,mid))
            {
                ans=mid;
                s=mid+1;
            }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int> v={4,2,1,3,6};
    int k=2;
    cout<<solution(v,k);
    return 0;
}