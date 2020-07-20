#include <bits/stdc++.h>

using namespace std;
#define IOS  ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

vector<vector<int>> g;
vector<int> used;
vector<int> ord;

void dfs(int &v) {
    used[v] = 1;
    for (auto &to:g[v]) {
        if (!used[to]) {
            dfs(to);
        }

        ord.emplace_back(v);
    }
}


int main() {
    IOS;

    int t, n, m, d, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        g = vector<vector<int >>(n);
        vector<pair<int, int>> edges;
        for (int i = 0; i < m; ++i) {
            cin >> d >> x >> y;
            --x, --y;
            if (d == 1) g[x].emplace_back(y);

            edges.emplace_back(x, y);
        }


        ord.clear();
        used = vector<int>(n);

        for (int i = 0; i < n; ++i) {
            if (!used[i]) dfs(i);
        }

        vector<int> pos(n);
        reverse(ord.begin(), ord.end());
        for (int j = 0; j < n; ++j) {
            pos[ord[j]] = j;
        }

        bool bad = false;
        for (int i = 0; i < n; ++i) {
            for (auto &j:g[i]) {
                if (pos[i] > pos[j]) bad = true;

            }
        }

        if (bad) cout << "NO\n";
        else {
            cout << "YES\n";

            for (auto [i, j] : edges) {
                if (pos[i] < pos[j]) {
                    cout << i + 1 << " " << j + 1 << "\n";
                } else {
                    cout << j + 1 << " " << i + 1 << "\n";
                }
            }
        }
    }

    return 0;
}