#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        char month[11], month1[11];
        long int year1, year2, leap;
        int day1, day2;

        scanf("%s %d %*c %ld", month, &day1, &year1);
        scanf("%*c");

        scanf("%s %d %*c %ld", month1, &day2, &year2);
        scanf("%*c");

        leap=(year2/4 - year2/100 + year2/400)-(year1/4 - year1/100 + year1/400);

        if(year1%400==0 || year1%4==0 && year1%100!=0)
        {
            if(month[0]=='J'&&month[1]=='a' || month[0]=='F')
                leap++;
        }
        if(year2%400==0 || year2%4==0 && year2%100!=0)
        {
            if((month1[0]=='J'&&month1[1]=='a') || (month1[0]=='F'&& day2<29))
                leap--;
        }

        cout<<"Case "<<t<<": "<<leap<<endl;
    }

    return 0;
}
