#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int n,k,low,high,mid,data[10005],sum;
    for(int t=1;t<=tc;t++)
    {
        scanf("%d%d",&n,&k);
        n++;
        k++;
        low=0;
        high=0;
        for(int i=0;i<n;i++){
            scanf("%d", &data[i]);
            high+=data[i];
        }
        while(high>=low)
        {
            int i,j;
            mid=(low+high)/2;
            for(i=0,j=0;i<k;i++)
            {
                sum=0;
                for( ;j<n;j++)
                {
                    if(sum+data[j]>mid)
                        break;
                    else
                        sum+=data[j];
                }
            }
            if(j<n)
                low=mid+1;
            else
                high=mid-1;
        }
        printf("Case %d: %d\n", t, low);
        for(int i=k,j=0;i>0;i--)
        {
            sum=0;
            for( ;n-j>=i;j++)
            {
                if(sum+data[j]>low)
                    break;
                sum+=data[j];
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
