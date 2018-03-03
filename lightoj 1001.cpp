#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr[50]={0}, number,x;
    cin>>t;
    while(t--)
    {
        cin>>number;
        if(number==0)
            cout<<0<<" "<<0<<endl;
        else if(number==20)
            cout<<10<<" "<<10<<endl;
        else if(number<11)
        {
            cout<<arr[number]<<" "<<abs(number-arr[number])<<endl;
            arr[number]++;
        }
        else
        {
            x=10-arr[number];
            cout<<x<<" "<<abs(number-x)<<endl;
            arr[number]++;
        }
    }
    return 0;
}
