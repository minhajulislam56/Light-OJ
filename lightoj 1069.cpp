#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,p,l,x,y;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>p>>l;
        x=(abs(p-l))*4;
        y=p*4;
        cout<<"Case "<<t<<": "<<x+y+19<<endl;
    }

    return 0;
}
