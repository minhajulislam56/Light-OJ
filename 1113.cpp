#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    //freopen("input.txt", "r", stdin);
    cin>>tc;
    for(int t=1;t<=tc;t++){
        cout<<"Case "<<t<<":"<<endl;
        stack<string> fwd, bck;
        bck.push("http://www.lightoj.com/");
        string input;
        while(cin>>input && input!="QUIT"){
            string temp;
            if(input=="VISIT"){
                cin>>temp;
                bck.push(temp);
                cout<<temp<<endl;
                while(!fwd.empty())
                    fwd.pop();
            }
            else if(input=="BACK"){
                if(bck.size()>1){
                    temp=bck.top();
                    bck.pop();
                    cout<<bck.top()<<endl;
                    fwd.push(temp);
                }
                else
                    cout<<"Ignored"<<endl;
            }
            else if(input=="FORWARD"){
                if(fwd.size()){
                    temp=fwd.top();
                    cout<<temp<<endl;
                    fwd.pop();
                    bck.push(temp);
                }
                else
                    cout<<"Ignored"<<endl;
            }
        }
    }
    return 0;
}
