/**** TLE VERDICT ****/

#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
int arr[MAX];
int tree[MAX*3];
void segment(int node, int b, int e)
{
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int left,right,mid;
    mid=(b+e)/2;
    left=2*node;
    right=2*node+1;
    segment(left,b,mid);
    segment(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node, int b, int e, int i, int value)
{
    if(i>e || i<b)
        return;
    if(b==e){
        tree[node]+=value;
        return;
    }
    int left,right,mid;
    mid=(b+e)/2;
    left=2*node;
    right=2*node+1;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=tree[left]+tree[right];
}
int query(int node, int b, int e, int i, int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j){
        return tree[node];
    }
    int left, right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    return query(left,b,mid,i,j)+query(right,mid+1,e,i,j);
}
int main()
{
    int tc,t=1;
    scanf("%d",&tc);
    while(tc--){
        int n,m;
        scanf("%d%d",&n, &m);
        for(int i=0;i<n;i++)
            scanf("%d", &arr[i]);
        memset(tree,0,sizeof tree);
        segment(1,0,n-1);
        cout<<"Case "<<t++<<":"<<endl;
        while(m--){
            int k;
            scanf("%d", &k);
            if(k==1){
                int value;
                scanf("%d",&value);
                int ans;
                ans=query(1,0,n-1,value,value);
                cout<<ans<<endl;
                update(1,0,n-1,value,-ans);
            }
            else if(k==2){
                int value, pos;
                scanf("%d%d",&pos,&value);
                update(1,0,n-1,pos,value);
            }
            else{
                int i,j;
                scanf("%d%d",&i, &j);
                cout<<query(1,0,n-1,i,j)<<endl;;
            }
        }

    }

    return 0;
}
