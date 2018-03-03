#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>tc;
    for(int t=1;t<=tc;t++){
        ll p, l, s;
        bool b=0;
        vector <ll> v;
        cin>>p>>l;
        s=p-l;
        cout<<"Case "<<t<<":";
        if(s<=l){
            cout<<" impossible"<<endl;
            continue;
        }
        for(ll i=1;i<=sqrt(s);i++){
            if(s%i==0){
                v.push_back(i);
                v.push_back(s/i);
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]>l)
                cout<<" "<<v[i];
        }
        cout<<endl;
    }

    return 0;
}
