#include<bits/stdc++.h>
using namespace std;
#define MAX 105
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int n, p[MAX]={0};
        cin>>n;
        for(int i=n;i>=2;i--){
            int ans=i, temp=2;
            while(ans>1){
                if(ans%temp==0){
                    p[temp]++;
                    ans=ans/temp;
                }
                else{
                    temp++;
                }
            }
        }
        int i;
        cout<<"Case "<<t<<": "<<n<<" = ";
        for(i=2;i<MAX;i++){
            if(p[i]>0){
                cout<<i<<" ("<<p[i]<<")";
                break;
            }
        }
        for(i+=1;i<MAX;i++){
            if(p[i]>0){
                cout<<" * "<<i<<" ("<<p[i]<<")";
            }
        }
        cout<<endl;

    }

    return 0;
}
