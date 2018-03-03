#include<bits/stdc++.h>
using namespace std;

bool storeAll[50], storeOne[50];
int n;
void binary(long long input)
{
    n=0;
    while(input)
    {
        if(input%2==1)
            storeAll[n++]=1;
        else
            storeAll[n++]=0;
        input=input/2;
    }
    //cout<<"N: "<<n<<endl;
}

int main()
{
    int t, cs=1,i,j,onebit;
    long long int input,mult,result;
    cin>>t;
    while(t--)
    {
        cin>>input;
        memset(storeAll,NULL, sizeof(storeAll));
        memset(storeOne,NULL, sizeof(storeOne));
        binary(input);
        i=onebit=0,j=1;
        while(1)
        {
            if(storeAll[i]==1 and storeAll[j]==0)
                break;
            if(storeAll[i]==1)
                onebit++;
            i++;
            j++;
        }

        /*cout<<"One bit: "<<onebit<<endl;
        cout<<"I: "<<i<<endl;
        cout<<"J: "<<j<<endl;*/

        for(int a=0;a<onebit;a++)
            storeOne[a]=1;
        storeOne[j]=1;

        for(int b=j+1;b<=n;b++){
            storeOne[b]=storeAll[b];
        }


        /*for(int d=0;d<=n;d++)
        {
            cout<<storeOne[d]<<" ";
        }
        cout<<endl;
        for(int d=0;d<=n;d++)
        {
            cout<<storeAll[d]<<" ";
        }*/

        mult=1, result=0;

        for(int c=0;c<=n+1;c++, mult*=2)
        {
            result+=storeOne[c]*mult;
        }
        cout<<"Case "<<cs++<<": "<<result<<endl;
    }

    return 0;
}
