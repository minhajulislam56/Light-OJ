#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int n,m,op, op2;
        int arr[110];
        char c;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        while(m--){
            cin>>c;
            if(c=='S'){
                cin>>op;
                for(int i=0;i<n;i++)
                    arr[i]+=op;
            }
            else if(c=='M'){
                cin>>op;
                for(int i=0;i<n;i++)
                    arr[i]*=op;
            }
            else if(c=='D'){
                cin>>op;
                for(int i=0;i<n;i++)
                    arr[i]=arr[i]/op;
            }
            else if(c=='R'){
                for(int i=0,j=n-1;i<n/2;i++, j--)
                    swap(arr[i], arr[j]);
            }
            else if(c=='P'){
                cin>>op>>op2;
                swap(arr[op], arr[op2]);
            }
        }
        cout<<"Case "<<t<<":"<<endl<<arr[0];
        for(int i=1;i<n;i++)
            cout<<" "<<arr[i];
        cout<<endl;
    }

    return 0;
}
