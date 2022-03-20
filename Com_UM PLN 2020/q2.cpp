// !FromHere
#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

typedef double db;
typedef long long ll;
typedef pair<db, db> pdd;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef unsigned long long ull;

#define F          first
#define S          second
#define pnl        printf("\n")
#define sz(x)      (int)x.size()
#define sf(x)      scanf("%d",&x)
#define pf(x)      printf("%d\n",x)
#define all(x)     x.begin(),x.end()
#define rall(x)    x.rbegin(),x.rend()
#define rep(i, n)  for(int i = 0; i < n; ++i)

const db eps = 1e-9;
const db pi = acos(-1);
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1000 * 1000 * 1000 + 7;

int n, m;
char arr[20][20];

bool cmp(pii a, pii b) {
    return arr[a.F][a.S] < arr[b.F][b.S];
}

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0 ,0};

int main() {
    cin >> n >> m;
    int len = 1;
    vector<pii> pyt;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            scanf(" %c", &arr[i][j]);
            if (arr[i][j] >= '0' && arr[i][j] <= '9') {
                pyt.push_back({i, j});
                len = max(len, arr[i][j] - '0');
                // arr[i][j] = '.';
            }
        }
    sort(all(pyt), cmp);
    int dist[20][20];
    memset(dist, 0x3f, sizeof dist);
    dist[pyt[0].F][pyt[0].S] = 0;
    queue<vector<pii> > q;
    q.push(pyt);
    while (!q.empty()) {
        vector<pii> cur = q.front();
        // for (int i = 0; i < sz(cur); ++i)
        //     cout << cur[i].F << " " << cur[i].S << endl;
        // cout << "dist = " << dist[cur[0].F][cur[0].S] << endl;
        // cout << "===========\n";
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int x = cur[0].F + dx[i];
            int y = cur[0].S + dy[i];
            if (x < 1 || x > n) continue;
            if (y < 1 || y > m) continue;
            if (arr[x][y] == '#') continue;
            bool kll = false;
            for (int j = 1; j < sz(cur) - 1; ++j)
                if (x == cur[j].F && y == cur[j].S) kll = true;
            // cout << "==> " << x << " " << y << endl;
            if (kll) continue;
            if (dist[x][y] <= dist[cur[0].F][cur[0].S] + 1)
                continue;
            dist[x][y] = dist[cur[0].F][cur[0].S] + 1;
            vector<pii> nxt = cur;
            for (int i = 1; i < sz(nxt); ++i)
                nxt[i] = cur[i - 1];
            nxt[0] = {x, y};
            q.push(nxt);
        }
    }
    int ans = -1;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (arr[i][j] == '@')
                ans = dist[i][j];
    if (ans > 300) ans = -1;
    cout << ans << endl;
    return 0;
}
