#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main()
{
    int tc,a,b,c,n;
    int total_left, total_right;
    bool left[MAX], right[MAX];
    freopen("input.txt", "r", stdin);
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>n;
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        total_left=total_right=0;

        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if(!left[a] && !right[b])
            {
                left[a]=right[b]=1;
                total_left+=c;
            }
            else
            {
                right[a]=left[b]=1;
                total_right+=c;
            }
        }
        cout<<"Case "<<t<<": "<<min(total_left,total_right)<<endl;
    }
    return 0;
}
