#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi,r,ans;
    int tc;
    pi=2*acos(0.0);
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>r;
        ans=(((r+r)*(r+r))-(pi*r*r));
        printf("Case %d: %.2lf\n", t, ans);
    }

    return 0;
}
