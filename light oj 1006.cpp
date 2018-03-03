#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int fn(int n)
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main()
{
    int t, caseno=0, n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case "<<++caseno<<": "<<fn(n)<<endl;
    }
    return 0;
}
