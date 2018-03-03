#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int n,k;
        vector <char> v;
        cin>>n>>k;

        for(int i='A';i<'A'+n;i++)
            v.push_back(i);

        cout<<"Case "<<t<<":"<<endl;

        do{
            if(k==0)
                break;
            k--;
            for(int i=0;i<n;i++)
                cout<<v[i];
            cout<<endl;
        }while(next_permutation(v.begin(),v.end()));
    }

    return 0;
}
