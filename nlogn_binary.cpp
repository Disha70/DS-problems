#include<bits/stdc++.h>
using namespace std;
int binarySearch(int k[], int n,int l, int r,int target)
{
    while(l<=r)
    {   
        int mid=(l+r)/2;
        if(k[mid]==target)
        {
            return mid;
        }
        else if(k[mid]<target)
        {
            l=mid+1;
        }
        else{
            
            r=mid-1;
        }
        



    }
    return -1;
}
void merge(int k[],int l,int mid, int r)
{
   int n1=mid-l+1;
   int n2=r-mid;
   int a[n1];
   int b[n2];
   for(int i=0;i<n1;i++)
   {
    a[i]=k[l+i];
   }
   for(int i=0;i<n2;i++)
   {
    b[i]=k[mid+1+i];
   }
   int i=0;
   int j=0;
   int p=l;
   while(i<n1 && j<n2)
   {
    if(a[i]<b[j])
    {
      k[p]=a[i];
      p++;
      i++;
    }
    else{
        k[p]=b[j];
        p++;
        j++;
    }
    while(i<n1)
    {
        k[p]=a[i];
        p++;
        i++;
    }
    while(j<n2)
    {
        k[p]=b[j];
        p++;
        j++;
    }
   }
}
void mergeSort(int k[],int l, int r)
{
    
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(k,l,mid);
        mergeSort(k,mid+1,r);
        merge(k,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    int l=0;
    int r=n-1;
    mergeSort(k,l,r);
    int target;
    cin>>target;
    int x=binarySearch(k,n,l,r,target);
    for(int i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }
    cout<<"\n";
    cout<<x<<"\n";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<k[i]<<" ";
    // }
    

}