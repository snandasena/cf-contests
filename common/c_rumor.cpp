#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n, m, x, y, cost;
vector<int> c(100001);
vector<bool> visited(100001);
vector<int> adj[100001];

void dfs(int u) {
    visited[u] = true;
    cost = min(cost, c[u]);

    for (int v: adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) cin >> c[i];

    for (int j = 1; j <= m; ++j) {
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cost = c[i];
            dfs(i);
            ans += cost;
        }
    }

    cout << ans;
    return 0;
}