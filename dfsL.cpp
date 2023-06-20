#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>g[N];
bool visited[N];
int level[N];
void dfs(int x, int l)
{
    for(int i=0;i<g[x].size();i++)
    {
        int child=g[x][i];
        if(child==l)
        continue;
        level[child]=level[x]+1;
        dfs(child,x);
    }
}
int main()
{
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++)
{
    int n,m;
    cin>>n>>m;
    g[n].push_back(m);
    g[m].push_back(n);
}
int root;
cin>>root;
dfs(root,0);
cout<<*max_element(level,level+N);
}