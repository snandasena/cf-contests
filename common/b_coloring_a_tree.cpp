#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10001];
vector<int> colour(10001);
int n;

int dfs(int curr, int c) {
    int res = 0;
    if (c != colour[curr]) {
        res++;
        c = colour[curr];
    }

    for (auto &it: adj[curr]) {
        res += dfs(it, c);
    }

    return res;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 2; i <= n; ++i) {
        int x;
        cin >> x;
        adj[x].emplace_back(i);
    }

    for (int j = 1; j <= n; ++j) {
        int x;
        cin >> x;
        colour[j] = x;
    }

    cout << dfs(1, 0);

    return 0;
}