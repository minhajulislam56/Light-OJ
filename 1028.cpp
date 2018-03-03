#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 1000002
vector <int> prime;
int sieve()
{
    bool p[MAX];
    memset(p,0,sizeof(p));
    for(int i=2;i<=MAX;i++){
        if(p[i]==0){
            for(int j=i*2;j<=MAX;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=MAX;i++){
        if(p[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    sieve();
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++){
        LL n;
        LL result=1;
        scanf("%lld",&n);
        LL l=sqrt(n);
        for(int i=0;i<=prime.size()-1 && prime[i]<=l;i++){
            LL k=0;
            if(n<prime[i])
                break;
            while(n%prime[i]==0){
                n=n/prime[i];
                k++;
            }
            result=result*(k+1);
        }
        if(n>1)
            result*=2;
        printf("Case %d: %lld\n",t, result-1);
    }

    return 0;
}
