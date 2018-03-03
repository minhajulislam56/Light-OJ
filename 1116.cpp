#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll w;
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        cin>>w;
        if(w%2==1){
            cout<<"Case "<<t<<": Impossible"<<endl;
            continue;
        }
        ll odd=w/2;
        ll even=2;

        while(odd%2==0){
            odd/=2;
            even*=2;
        }
        cout<<"Case "<<t<<": "<<odd<<" "<<even<<endl;
    }

    return 0;
}
