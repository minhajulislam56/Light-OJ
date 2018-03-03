#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,num;
    int tc,t=1;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        num=k;
        int cnt=1;
        while(num%n){
            num=num*10+k;
            if(num>n){
                num%=n;
            }
            cnt++;
        }
        cout<<"Case "<<t++<<": "<<cnt<<endl;
    }

    return 0;
}
