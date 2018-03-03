#include<bits/stdc++.h>
using namespace std;
#define MAX 5000002
unsigned long long value[MAX];
bool bPrime[MAX];
int prime_gen()
{
    memset(bPrime, 1, sizeof(bPrime));
    for(int i=2;i<=MAX;i++)
    {
        if(bPrime[i]==1)
        {
            for(int j=i+i;j<=MAX;j+=i)
            {
                bPrime[j]=0;
            }
        }
    }
}
int main()
{
    int tc;
    vector <int> vec;
    unsigned long long a,b,prime,reslt;
    prime_gen();
    for(int i=2;i<=MAX;i++)
    {
        if(bPrime[i])
        {
            vec.push_back(i);
        }

    }
    for(int i=0;i<=MAX;i++)
        value[i]=i;
    for(int i=0;i<vec.size();i++)
    {
        prime=vec[i];
        for(int j=prime;j<=MAX;j+=prime)
        {
            value[j]=((value[j]*(prime-1))/prime);
        }
    }
    for(int i=1;i<=MAX;i++)
    {
        value[i]=value[i]*value[i];
        value[i]+=value[i-1];
    }
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        scanf("%lld %lld", &a, &b);
        reslt=value[b]-value[a-1];
        printf("Case %d: %llu\n", t, reslt);
    }

    return 0;
}
