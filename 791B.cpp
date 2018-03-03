#include<bits/stdc++.h>
using namespace std;
map <int, int> chk;
int main()
{
    int n,m;
    cin>>n>>m;
    chk.clear();
    int maxx=-1;
    while(m--){
        int x,y;
        cin>>x>>y;
        chk[x]++;
        maxx=max(maxx,chk[x]);
        chk[y]++;
        maxx=max(maxx,chk[y]);
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(chk[i]){
            if(chk[i]!=maxx)
                flag=true;
        }
    }
    if(flag==false)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
