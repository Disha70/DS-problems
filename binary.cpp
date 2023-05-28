#include<bits/stdc++.h>
using namespace std;
binarySearch(int a[],int n,int target)
{
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==target)
        {
            return mid+1;
        }
        else if(a[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    cout<<binarySearch(a,n,target)<<"\n";
}