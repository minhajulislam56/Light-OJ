#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        long long int a, b, c;
        cin>>a>>b>>c;
        cout<<"Case "<<t<<": ";
        if(a>b && a>c)
        {
            if(a*a==(b*b+c*c))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else if(b>a && b>c)
        {
            if(b*b==(a*a+c*c))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
        {
            if(c*c==(a*a+b*b))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }

    return 0;
}
