#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
double digits[MAX];
int main()
{
    for(int n=1;n<MAX;n++)
    {
        digits[n]=log10(n)+digits[n-1];
    }

    long long int tc,n,b;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>n>>b;
        cout<<"Case "<<t<<": "<<(long)floor(digits[n]/log10(b))+1<<endl;
    }

    return 0;
}
