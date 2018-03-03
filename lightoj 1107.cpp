#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int x1, y1, x2, y2, x, y, n;

        cin>>x1>>y1>>x2>>y2>>n;
        cout<<"Case "<<t<<":"<<endl;
        while(n--)
        {
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
