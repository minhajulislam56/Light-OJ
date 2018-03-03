#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int chart[32][32], wish[32], n,m,k,p,s;

        cin>>n>>m>>k;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin>>chart[i][j];
            }
        }
        cin>>p;
        for(int i=0;i<p;i++)
            cin>>wish[i];
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                if(chart[i][j]<0){
                    for(s=0;s<p;s++){
                        if(wish[s]==-chart[i][j])
                            break;
                    }
                    if(s==p)
                        break;
                }
                else{
                    for(s=0;s<p;s++){
                        if(wish[s]==chart[i][j])
                            break;
                    }
                    if(s<p)
                        break;
                }
            }
            if(j==k)
                break;
        }
        if(i==n)
            cout<<"Case "<<t<<": Yes"<<endl;
        else
            cout<<"Case "<<t<<": No"<<endl;
    }

    return 0;
}
