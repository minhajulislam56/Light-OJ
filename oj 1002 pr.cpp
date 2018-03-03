#include<bits/stdc++.h>
using namespace std;
const int MAX=1e8;
int n,m,p;
int gra[505][505], dis[505], vis[505];
void spanning()
{
    for(int i=0;i<n;i++)
    {
        dis[i]=gra[p][i];
        vis[i]=0;
    }
    vis[p]=1, dis[p]=0;
    int minx, x;
    for(int i=1;i<n;i++)
    {
        minx=MAX;
        for(int j=0;j<n;j++)
        {
            if(!vis[j] && dis[j]<minx)
                minx=dis[x=j];
        }
        if(minx==MAX)
            return;
        vis[x]=1;
        for(int j=0;j<n;j++)
        {
            if(!vis[j])
                dis[j]=min(dis[j], max(gra[x][j], dis[x]));
        }
    }
}
int main()
{
    int t, u, v, w,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                gra[i][j]=MAX;
            }
        }
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            if(gra[u][v]>w)
                gra[u][v]=gra[v][u]=w;
        }
        cin>>p;
        spanning();
        cout<<"Case "<<k++<<endl;
        for(int i=0;i<n;i++)
        {
            if(dis[i]==MAX)
                cout<<"Impossible"<<endl;
            else
                cout<<dis[i]<<endl;
        }
    }
    return 0;
}
