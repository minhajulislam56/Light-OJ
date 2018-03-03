#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    getchar();
    for(int t=1;t<=tc;t++){
        string s;
        long long int b, temp;
        cin>>s>>b;
        temp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='-')
                continue;
            temp=temp*10+(s[i]-48);
            temp=temp%b;
        }
        cout<<"Case "<<t<<": ";
        if(temp==0)
            cout<<"divisible"<<endl;
        else
            cout<<"not divisible"<<endl;

    }
    return 0;
}
