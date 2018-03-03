#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        double ox, oy, ax, ay, bx, by, a, b, c, theta, s;

        scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);

        a=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        b=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));

        theta=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        s=b*theta;

        printf("Case %d: %lf\n", t, s);
    }


    return 0;
}
