#include<bits/stdc++.h>
using namespace std;
long long n,c;

long long check (long long t)
{
    return t*(c-t*n);
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--){
        cin>>n>>c;
        cout<<"Case "<<t++<<": ";
        if(!n){
            cout<<0<<endl;
            continue;
        }
        long long f=c/(n*2);
        (check(f)>=check(f+1))?cout<<f<<endl:cout<<f+1<<endl;
    }

    return 0;
}
