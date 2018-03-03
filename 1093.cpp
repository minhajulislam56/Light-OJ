#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
const int inf=-(1<<28);
const int inf2=(1<<28);
int arr[MAX];
int block[350];
int block2[350];
void init(int sz){
    for(int i=0;i<=sz;i++){
        block[i]=inf;
        block2[i]=inf2;
    }
}
int getID(int pos, int sz){
    return (pos/sz);
}
void update(int val, int pos, int sz){
    int id=getID(pos,sz);
    block[id]=max(block[id], val);
    block2[id]=min(block2[id], val);
}
int max_query(int l, int r, int sz){
    int lid=getID(l, sz);
    int rid=getID(r, sz);
    if(lid==rid){
        int ret=inf;
        for(int i=l;i<=r;i++)
            ret=max(ret, arr[i]);
        return ret;
    }
    int m1,m2,m3;
    m1=m2=m3=inf;
    for(int i=l;i<(lid+1)*sz;i++)
        m1=max(m1,arr[i]);
    for(int i=lid+1;i<rid;i++)
        m2=max(m2,block[i]);
    for(int i=rid*sz;i<=r;i++)
        m3=max(m3,arr[i]);
    return max(m1, max(m2,m3));
}
int min_query(int l, int r, int sz){
    int lid=getID(l, sz);
    int rid=getID(r, sz);
    if(lid==rid){
        int ret=inf2;
        for(int i=l;i<=r;i++)
            ret=min(ret, arr[i]);
        return ret;
    }
    int m1,m2,m3;
    m1=m2=m3=inf2;
    for(int i=l;i<(lid+1)*sz;i++)
        m1=min(m1,arr[i]);
    for(int i=lid+1;i<rid;i++)
        m2=min(m2,block2[i]);
    for(int i=rid*sz;i<=r;i++)
        m3=min(m3,arr[i]);
    return min(m1, min(m2,m3));
}
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int t=1;t<=tc;t++){
        int n,d;
        scanf("%d%d", &n, &d);
        int block_sz=sqrt(n);
        init(block_sz);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d", &x);
            arr[i]=x;
            update(x, i, block_sz);
        }
        int ans=0;
        for(int i=0;i+d-1<n;i++){
            int result=max_query(i, i+d-1, block_sz);
            int result1=min_query(i,i+d-1, block_sz);
            ans=max(result-result1,ans);
        }
        printf("Case %d: %d\n", t, ans);
    }

    return 0;
}
