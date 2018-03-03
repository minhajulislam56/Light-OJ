#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 1000001
#define MOD 1000003
LL f[MAX];
LL bigMod(LL b, LL p){
    if(p==0)
        return 1;
    if(p%2==0){
        LL rem=bigMod(b, p/2);
        return ((rem%MOD)*(rem%MOD))%MOD;
    }
    else{
        LL rem=bigMod(b, p-1);
        return ((rem%MOD)*(b%MOD))%MOD;
    }
}
int main()
{
    int tc;
    cin>>tc;
    f[1]=1;
    for(LL i=2;i<MAX;i++){
        f[i]=(i*f[i-1])%MOD;
    }
    for(int t=1;t<=tc;t++){
        LL n, r, s;
        cin>>n>>r;
        if(n<r){
            cout<<"Case "<<t<<": "<<0<<endl;
            continue;
        }
        if(n==r || r==0){
            cout<<"Case "<<t<<": "<<1<<endl;
            continue;
        }
        s=((f[n-r]%MOD)*(f[r]%MOD))%MOD;
        LL result;
        result=(f[n]*bigMod(s,MOD-2))%MOD;
        cout<<"Case "<<t<<": "<<result<<endl;
    }

    return 0;
}
