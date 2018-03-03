#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,sum,x;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)
                sum+=x;
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }

    return 0;
}
