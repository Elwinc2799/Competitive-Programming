#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef set<int> SI;
typedef pair<int, int> ii;
typedef unordered_map<char, int> UMCI;
typedef unordered_map<ll, int> UMllI;
typedef unordered_map<int, int> UMII;

const int MAXN = 20;
const int MAXSUM = 5000;
int N, A, sum = 0;

VI arr;
bool visited[MAXN + 1][2 * MAXSUM + 1];
int dp[MAXN + 1][2 * MAXSUM + 1];

int recurse(int idx, int sum) {
    if (visited[idx][sum + MAXSUM]) {
        return dp[idx][sum + MAXSUM];
    }
    visited[idx][sum + MAXSUM] = true;

    int& answer = dp[idx][sum + MAXSUM];

    answer = -MAXSUM;

    if (idx == N) {
        if (sum == 0) {
            answer = 0;
        }
        else {
        }
    }
    else {
        answer = max(answer, arr[idx] + recurse(idx + 1, sum + arr[idx]));

        answer = max(answer, recurse(idx + 1, sum - arr[idx]));

        answer = max(answer, recurse(idx + 1, sum));
    }
    return answer;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        arr.push_back(A);
    }

    cout << recurse(0, 0);

    return 0;
}