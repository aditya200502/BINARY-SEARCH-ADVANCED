#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;
long long m;
long long trees[N];
bool isPossible(int h)
{
    long long wood=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i] >=h)
        {
            wood +=(trees[i]-h);
        }
    }
    if(wood>=m)
        return true;
    else
        return false;
}
int main()
{
    //cout<<"enter value of n and m::"<<endl;
    cin >> n >> m;
    //cout<<"enter value in tress::";
    for(int i=0;i<n;i++)
    {
        cin >> trees[i];
    }
    long long s=0;
    long long e=1e9,mid;
    //long long mid=s+(e-s)/2;
    while( e-s > 1)
    {
        mid=(s+e)/2;
        if(isPossible(mid))
            s=mid;
        else
            e=mid-1;
        //mid=s+(e-s)/2;
    }
    if(isPossible(e))
        cout<<e<<endl;
    else
        cout<<s<<endl;
    return 0;
}