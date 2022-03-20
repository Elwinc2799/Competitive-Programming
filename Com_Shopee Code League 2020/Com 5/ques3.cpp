#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector <ii> vii;
typedef vector <int> vi;

vector<vii> adj;

vi dfs_num;


void dfs(int u)
{
    dfs_num[u] = 1;
    for (auto &[v,w] : adj[u])
    {
        if (dfs_num[v] == 0)
        {
            dfs(v);
        }
    }
}


int main()
{
    int Q;
    int N;

    cin >> Q >> N;

    string ops;
    int v1;
    int v2;

    adj.assign(N, vii());
    stack <int> s;
    stack <int> s1;
    while (Q--)
    {
        cin >> ops;

        if (ops == "PUSH")
        {
            cin >> v1;
            cin >> v2;
            v1--;
            v2--;

            int temp = 0;


            s.push(v1);
            s1.push(v2);

            adj[v1].emplace_back(v2,0);
            adj[v2].emplace_back(v1,0);
        }
        if (ops == "POP")
        {
            adj[s.top()].pop_back();
            adj[s1.top()].pop_back();
            s.pop();
            s1.pop();
        }

        dfs_num.assign(N, 0);

        int CC = 0 ;

        for (int u = 0 ; u < N ; u++)
        {
            if (dfs_num[u] == 0)
            {
                ++CC;
                dfs(u);
            }
        }

        cout << CC << "\n";
    }

}
