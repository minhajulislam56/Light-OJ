#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,rslt;
    scanf("%d", &tc);
    for(int t=1;t<=tc;t++)
    {
        int m,n;
        scanf("%d%d", &m, &n);
        cout<<"Case "<<t<<": ";
        if(m==1)
            cout<<n<<endl;
        else if(n==1)
            cout<<m<<endl;
        else if(m==2)
        {
            rslt=(n/4)*4;
            if(n%4==1)
                rslt=rslt+2;
            else if(n%4>1)
                rslt+=4;
            cout<<rslt<<endl;
        }
        else if(n==2)
        {
            rslt=(m/4)*4;
            if(m%4==1)
                rslt=rslt+2;
            else if(m%4>1)
                rslt+=4;
            cout<<rslt<<endl;
        }
        else if((m*n)%2==0)
            cout<<(m*n)/2<<endl;
        else
            cout<<((m*n)/2)+1<<endl;
    }

    return 0;
}
