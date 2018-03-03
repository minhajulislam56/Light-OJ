#include<bits/stdc++.h>
using namespace std;
#define MAX 1001
bool compare(pair<int,int>a, pair<int,int>b){
    if(a.first<b.first)
        return 1;
    if(a.first>b.first)
        return 0;
    if(a.second>b.second)
        return 1;

    return 0;
}
int main()
{
    vector< pair<int,int> > v(MAX);

    for(int i=1;i<MAX;i++){
        v[i].first=0;
        v[i].second=i;
    }
    for(int i=1;i<MAX;i++){
        for(int j=i;j<MAX;j+=i){
            v[j].first++;
        }
    }
    sort(v.begin(), v.end(), compare);

    int n, tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        cin>>n;
        cout<<"Case "<<t<<": "<<v[n].second<<endl;
    }
    return 0;
}
