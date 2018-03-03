#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10], b[10];
    int t,n,flag,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(strcmp(a,"wine")==0)
                flag=1;
        }
        if(flag==0)
            cout<<"Case "<<k++<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<k++<<": "<<"No"<<endl;
    }
    return 0;
}
