#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    dp[1]=0;
    dp[2]=1;
    //dp[2]=1;
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<"\n";
}