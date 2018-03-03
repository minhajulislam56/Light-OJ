#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
vector <int> adj[MAX];
int visited[MAX];
int black,green;
void init()
{
    for(int i=0;i<=MAX;i++)
        adj[i].clear();
}
void bfs(int s)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;
    black++;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(!visited[v]){
                if(visited[u]==1){
                    visited[v]=2;
                    green++;
                    q.push(v);
                }
                else{
                    visited[v]=1;
                    black++;
                    q.push(v);
                }
            }
        }
    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int n,x,y;
        cin>>n;
        memset(visited,0,sizeof visited);
        init();
        for(int i=0;i<n;i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int high=0;

        for(int i=0;i<=MAX;i++){
            black=green=0;
            if(!adj[i].empty() && visited[i]==0){
                bfs(i);
                //cout<<black<<" "<<green<<endl;
                high+=max(black,green);
            }
        }
        cout<<"Case "<<t<<": "<<high<<endl;
    }

    return 0;
}
