#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int t=0;
    while(tc--){
        string per;
        int n;
        cin>>n>>per;
        cout<<"Case "<<++t<<": ";
        n%=3;
        per=="Alice"?(n==0 || n==2?cout<<"Alice"<<endl:cout<<"Bob"<<endl):(n==1 || n==2?cout<<"Bob"<<endl:cout<<"Alice"<<endl);
    }

    return 0;
}
