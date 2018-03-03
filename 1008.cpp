#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    int t,cs=1;
    LL s,sq,x,y;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sq=ceil(sqrt(s));
        if(sq*sq-s<sq)
        {
            x=sq;
            y=sq*sq-s+1;
        }
        else
        {
            x=s-((sq-1)*(sq-1));
            y=sq;
        }
        if(sq&1)
            swap(x,y);
        cout<<"Case "<<cs++<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}
