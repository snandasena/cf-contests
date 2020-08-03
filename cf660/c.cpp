#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> edges;
vector<int> p;
vector<int> h;
vector<int> a;
vector<int> g;
bool ok = true;

void dfs(int v, int ancestor = -1) {
    a[v] = p[v];
    int sg = 0;
    for (int &to: edges[v]) {
        if (to == ancestor) continue;
        dfs(to, v);
        sg += g[to];
        a[v] += a[to];
    }

    if ((a[v] + h[v]) % 2 != 0) ok = false;
    g[v] = (a[v] + h[v]) / 2;

    if (g[v] < 0 || g[v] > a[v]) ok = false;

    if (sg > g[v]) ok = false;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        p = vector<int>(n);
        for (int &i: p) cin >> i;
        h = vector<int>(n);
        for (int &i: h) cin >> i;
        edges = vector<vector<int>>(n);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x >> y;
            x--;
            y--;
            edges[x].emplace_back(y);
            edges[y].emplace_back(x);
        }
        a = vector<int>(n);
        g = vector<int>(n);

        dfs(0);
        cout << (ok ? "YES\n" : "NO\n");
        ok = true;
        edges.clear();
    }


    return 0;
}