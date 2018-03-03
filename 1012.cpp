#include<bits/stdc++.h>
using namespace std;
#define MAX 1001
char place[MAX][MAX];
int val[MAX][MAX];
int movement;
int w, r, p, q;

void bfs(int i, int j)
{
    if((i+1)<r && val[i+1][j]==0 && place[i+1][j]=='.')
    {
        val[i+1][j]=1;
        movement++;
        bfs(i+1,j);
    }
    if((i-1)>=0 && val[i-1][j]==0 && place[i-1][j]=='.')
    {
        val[i-1][j]=1;
        movement++;
        bfs(i-1,j);
    }
    if(j+1<w && val[i][j+1]==0 && place[i][j+1]=='.')
    {
        val[i][j+1]=1;
        movement++;
        bfs(i, j+1);
    }
    if(j-1>=0 && val[i][j-1]==0 && place[i][j-1]=='.')
    {
        val[i][j-1]=1;
        movement++;
        bfs(i, j-1);
    }
}
int main()
{
    int tc;
    freopen("input.txt", "r", stdin);
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>w>>r;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>place[i][j];
                if(place[i][j]=='@')
                {
                    p=i;
                    q=j;
                    movement=1;
                }
            }
        }
        memset(val, 0, sizeof(val));
        val[p][q]=1;
        bfs(p,q);
        cout<<"Case "<<t<<": "<<movement<<endl;
    }
    return 0;
}
