#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &rank,int m,int mid)
{
    int time=0;
    int dishes=0;
    for(int i=0;i<rank.size();i++)
    {
        time=rank[i];
        int j=2;
        //j is initialise 2 because once calculation has been done as it is added.
        while(time <= mid)
        {
            dishes++;
            time +=(rank[i] *j);
            j++;
        }
        if(dishes >=m)
            return true;            
    }
    return false;
}
int solution(vector<int> &rank,int m)
{
    int s=0;
    int e=1e8;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(isPossible(rank,m,mid))
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
    int n;
    cin>>n;
    vector<int> rank(n);
    for(int i=0;i<n;i++)
    {
        cin>>rank[i];
    }
    int m;
    //m stores number of cook.
    cin>>m;
    cout<<solution(rank,m);
    return 0;
}