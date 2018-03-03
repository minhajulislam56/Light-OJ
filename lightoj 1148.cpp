#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tc, t=1;
    cin>>tc;
    while(tc--){
        cin>>n;
        long long int x;
        map<long double, int> mp;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        map<long double, int>::iterator itr;
        long long int ex=0;
        for(itr=mp.begin();itr!=mp.end();itr++){
            ex+=ceil(itr->second/(itr->first+1))*(itr->first+1);
        }
        cout<<"Case "<<t++<<": "<<ex<<endl;
    }

    return 0;
}
