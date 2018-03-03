#include<bits/stdc++.h>
using namespace std;

long long josephus(long long n, long long k)
{
    if(n==1)
        return 1;
    return (josephus(n-1,k)+k-1)%n+1;
}

int main()
{
    int tc;
    long long n,k;
    cin>>tc;
    int t=1;
    while(tc--){
        cin>>n>>k;

        cout<<"Case "<<t++<<": "<<josephus(n,k)<<endl;
    }

    return 0;
}
