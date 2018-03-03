#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1);
int main()
{
    int tc;
    double r,n;
    cin>>tc;
    cout<<fixed;
    cout.precision(10);
    for(int t=1;t<=tc;t++)
    {
        cin>>r>>n;
        cout<<"Case "<<t<<": "<<(sin(pi/n)*r)/(sin(pi/n)+1)<<endl;
    }

    return 0;
}
