#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c,r,rslt;
    int tc,t=1;
    cin>>tc;
    while(t<=tc)
    {
        cin>>a>>b>>c>>r;
        rslt=sqrt(r/(r+1));
        printf("Case %d: %lf\n", t, (a*rslt));
    }

    return 0;
}
