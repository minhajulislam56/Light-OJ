#include<bits/stdc++.h>
using namespace std;
#define MAX 55
#define MOD 100000007
int coins[MAX], value[MAX];
long long dp[MAX][MAX];
int n,k;
long long coin_change(int i, int k)
{
    if(i==n+1){
        if(k==0) return 1;
        else return 0;
    }
    if(k==0) return 1;
    if(k<0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];

    long long ans=0;
    for(int j=0;j<=value[i];j++){
        ans=(ans+coin_change(i+1,k-coins[i]*j))%MOD;
    }

    return dp[i][k]=ans;

}

int main()
{
    //freopen("input.txt","r",stdin);
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){

        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>coins[i];
        for(int i=1;i<=n;i++) cin>>value[i];
        memset(dp,-1,sizeof dp);
        cout<<"Case "<<t<<": "<<coin_change(1,k)<<endl;
    }

    return 0;
}
