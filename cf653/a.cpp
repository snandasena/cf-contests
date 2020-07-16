#include <bits/stdc++.h>

using namespace std;

queue<pair<int, int >> q;
vector<pair<int, int>> way[300005];
int v[300005];
int res[300005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, d;
    cin >> n >> k >> d;
    for (int i = 0; i < k; i++) {
        int p;
        cin >> p;
        q.push({p, 0});
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        way[u].emplace_back(v, i + 1);
        way[v].emplace_back(u, i + 1);
    }

    while (!q.empty()) {
        int pos = q.front().first;
        int from = q.front().second;
        q.pop();

        if (v[pos]) continue;

        v[pos] = 1;

        for (int i = 0; i < way[pos].size(); i++) {
            if (way[pos][i].first != from) {
                if (v[way[pos][i].first]) {
                    res[way[pos][i].second] = 1;
                } else {
                    q.push({way[pos][i].first, pos});
                }
            }

        }
    }

    int rescont = 0;
    for (int i = 1; i <= n - 1; i++) {
        if (res[i]) {
            rescont++;
        }
    }


    cout << rescont << "\n";
    for (int i = 1; i <= n - 1; i++) {
        if (res[i]) {
            cout << i << " ";
        }
    }

    return 0;
}