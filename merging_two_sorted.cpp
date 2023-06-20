#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    vector<int>c;
    int i=0,j=0;
    while(i<n||j<m)
    {
        if(i<n && j<m)
        {
            if(a[i]<b[j])
            {c.push_back(a[i]);
            i++;
            }
            else 
            {
                c.push_back(b[j]);
                j++;
            }

        }
        else if(i<n)
        {
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
}