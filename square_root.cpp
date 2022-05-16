#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sqr(int);
int main()
{
    int n=8;
    cout<<sqr(n);
    return 0;
}
int sqr(int n)
{
   int low=0,high=n;
   int mid=low+(high-low)/2;
   int ans=-1;
   while(low<=high)
   {
       int sq=mid*mid;
       if(sq==n)
       {
           return mid;
       }
       if(sq>n)
           high=mid-1;
       else
           {
             ans=low;
             low=mid+1;
           }
         mid=low+(high-low)/2;    
   }
   return ans;
}
