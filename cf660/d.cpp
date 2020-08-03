#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<ll>> edges;
vector<ll> a, b, used;
vector<ll> order[2];
ll n, x, ans;


void dfs(ll &v) {
    used[v] = 1;
    for (ll &to: edges[v]) {
        if (!used[to]) dfs(to);
    }

    ans += a[v];

    if (b[v] != -1 && a[v] > 0) {
        a[b[v]] += a[v];
    }

    if (a[v] > 0) order[0].emplace_back(v);
    else order[1].emplace_back(v);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    edges.resize(n), a.resize(n), b.resize(n);

    for (ll &i: a)cin >> i;
    for (ll i = 0; i < n; ++i) {
        cin >> x;
        if (x != -1) {
            --x;
            edges[x].emplace_back(i);
        }
        b[i] = x;
    }

    ans = 0, used.assign(n, 0);

    for (ll i = 0; i < n; ++i) {
        if (!used[i]) dfs(i);
    }

    cout << ans << "\n";

    reverse(order[1].begin(), order[1].end());
    for (ll &i: order[0]) cout << i + 1 << " ";
    for (ll &i: order[1]) cout << i + 1 << " ";
    cout << "\n";
    return 0;
}