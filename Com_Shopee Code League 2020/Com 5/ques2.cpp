#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

vi bfs_num;
vector <vii> adj;

int main(){
	int V;
    cin >> V;

    bfs_num.assign(V, INT_MAX);
    adj.assign(V, vii());

    for (int i = 0 ; i < V-1 ; i++)
    {
        int v1,v2,w;

        cin >> v1 >> v2 >> w;
        v1--;
        v2--;
        adj[v1].emplace_back(v2,w);
        adj[v2].emplace_back(v1,w);
    }
    
    
}
