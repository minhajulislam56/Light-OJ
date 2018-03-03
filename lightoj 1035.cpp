#include<bits/stdc++.h>
using namespace std;
#define PMX 1000000
#define mark(x) marked[x >> 6] |= (1 << ((x & 63) >> 1))
#define check(x) (marked[x >> 6] & (1 << ((x & 63) >> 1)))
vector<int> primes;
int marked[PMX/64 + 2];
bool isPrime(int x)
{
	return (x > 1) && ((x == 2) || ((x & 1) && (!(check(x)))));
}

void seive(int n)
{
	int i, j;
	for(i = 3; i * i <= n; i += 2) if(!check(i)) for(j = i * i; j <= n; j += i << 1) mark(j);
	primes.push_back(2);
	for(i = 3; i <= n; i += 2) if(isPrime(i)) primes.push_back(i);
}
int main()
{
    seive(101);
    int tc,t=1;
    cin>>tc;
    while(tc--){
        int n,k,p;
        cin>>n;
        map<int,int> mp;
        for(int i=2;i<=n;i++){
            k=i;
            p=0;
            while(k!=1){
               if(k%primes[p]==0){
                    k/=primes[p];
                    mp[primes[p]]++;
               }
               else{
                   p++;
               }
            }
        }
        cout<<"Case "<<t++<<": "<<n<<" = ";
        map<int,int>::iterator itr;
        itr=mp.begin();
        cout<<itr->first<<" ("<<itr->second<<")";
        itr++;
        while(itr!=mp.end()){
            cout<<" * "<<itr->first<<" ("<<itr->second<<")";
            itr++;
        }
        cout<<endl;
    }

    return 0;
}
