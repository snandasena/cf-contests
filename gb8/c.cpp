#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int> > ans;

    for (int i = 0; i <= n + 1; i++) {
        ans.emplace_back(i, i);
    }

    for (int j = 0; j <= n; ++j) {
        ans.emplace_back(j, j + 1);
        ans.emplace_back(j + 1, j);
    }

    cout << ans.size() << "\n";

    for (auto &p: ans) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
};