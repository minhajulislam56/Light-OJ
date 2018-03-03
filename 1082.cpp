#include<bits/stdc++.h>
using namespace std;
#define INF (1<<28)
#define MAX 1000002

int input_list[MAX], gen_list[1000];

void init(int block_size)
{
    for(int i=0;i<=block_size;i++)
        gen_list[i]=INF;
}

int getID(int pos, int block_size)
{
    return (pos/block_size);
}

void update_list(int value, int pos, int block_size)
{
    int i=getID(pos,block_size);
    gen_list[i]=min(gen_list[i], value);
}

int get_result(int left, int right, int block_size)
{
    int l=getID(left,block_size);
    int r=getID(right,block_size);

    if(l==r)
    {
        int result=INF;
        for(int i=left;i<=right;i++)
            result=min(result, input_list[i]);
        return result;
    }
    int m1, m2, m3;
    m1=m2=m3=INF;
    for(int i=left;i<(l+1)*block_size;i++)
        m1=min(m1, input_list[i]);
    for(int i=l+1;i<r;i++)
        m2=min(m2, gen_list[i]);
    for(int i=r*block_size;i<=right;i++)
        m3=min(m3, input_list[i]);

    return (min(m1, min(m2, m3)));
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int tc;
    scanf("%d", &tc);
    for(int t=1;t<=tc;t++)
    {
        int n, q, block_size, input;
        scanf("%d%d", &n, &q);
        printf("Case %d:\n", t);
        block_size=sqrt(n);
        init(block_size); /*******MAKING THE VALUE INFINITY*********/

        for(int i=0;i<n;i++)
        {
            scanf("%d", &input);
            input_list[i]=input;
            update_list(input, i, block_size);
        }
        while(q--)
        {
            int i, j;
            scanf("%d%d", &i, &j);
            int result=get_result(i-1,j-1,block_size);
            printf("%d\n", result);
        }
    }

    return 0;
}
