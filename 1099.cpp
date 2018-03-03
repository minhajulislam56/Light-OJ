#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define N 123123
#define M 5123
using namespace std;
int n, m;
vector < vector<pair<int, int> > > G(N);
vector<int>D(N, 1000000);//vinaxav pirvel umcires manzilebs
vector<int>D2(N, 1000000);//vinaxav meore umcires manzilebs
bool vis[N];
priority_queue<pair<int, int> >Q;
//long long total = 0;
int f, s, t;
int main(){
	cin>>n>>m;
	for (int i = 1; i <= m; i++){
		cin>>f>>s>>t;
		G[f].push_back(make_pair(s, t));
		G[s].push_back(make_pair(f, t));
	}
	D[1] = 0;
	Q.push(make_pair(-D[1], 1));
	while (!Q.empty()){
		int w = -Q.top().first;
		//cout<<"node "<<w<<endl;
		int a = Q.top().second;
		Q.pop();
		if (D2[a] < w)continue;
		for (int j = 0; j < G[a].size(); j++){
			int node = G[a][j].first;
			int weight = G[a][j].second;
			int d = weight + D[a];
			if (d< D[node]){//tu agmovachent rom ufro naklebi sigrzit mivdivart am wveroshi vidre vinaxavdit pirvel umcires wonianebshi  mashin pirveli umciresi sheicvleba axlit xolo meore if-shi ukve dzveli umciresi sigrze meore umciresi gza xdeba
				swap(d, D[node]);
				Q.push(make_pair(-D[node], node));
			}
			if (D2[node]>d){//
				D2[node] = d;
				Q.push(make_pair(-D2[node], node));
			}
		}
	}
	cout<<D2[n]<<endl;
	return 0;
}
