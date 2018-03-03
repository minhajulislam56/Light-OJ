#include<bits/stdc++.h>
using namespace std;
map<string,int> vlu;

int main()
{
    vlu["water"]=1;
    vlu["soda"]=2;
    vlu["wine"]=3;
    int tc,n,f;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>n;
        f=0;
        for(int lim=0;lim<n;lim++)
        {
            char str1[10000];
            cin>>str1;
            char str2[10000];
            cin>>str2;

            if(vlu[str1]>vlu[str2])
                f=1;
        }
        if(f==0)
            cout<<"Case "<<t<<": Yes"<<endl;
        else
            cout<<"Case "<<t<<": No"<<endl;
    }

    return 0;
}
