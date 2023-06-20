#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u,v,c,s,d,n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    int dis[n+1][n+1];
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>c;
        adj[u].push_back(v);
        dis[u][v]=c;
    }
    int cost[n+1];
    for(int i=0;i<n;i++){
         cost[i]=INT_MAX;
            }
        cin>>s>>d;
        cost[s]=0;
        priority_queue<pair<int ,int>,vector<pair<int ,int>>,greater<pair<int,int>> >pq;
        pq.push({0,s});
        while(!pq.empty())
        {
            pair<int,int>head=pq.top();
            pq.pop();
            int current_cost=head.first;
            int current_node=head.second;
            for(int i=0;i<adj[current_node].size();i++)
            {
                int x=adj[current_node][i];
                if(cost[x]>cost[current_node]+dis[current_node][x]){
                    int new_cost=cost[current_node]+dis[current_node][x];
                 pq.push({new_cost,x});
                }
            }
        }
       // cout<<d<<" "<<cost[d];
       for(int i=0;i<m;i++)
       {
        cout<<"distance of:"<<i<<cost[i]<<"\n"; 
       }
}