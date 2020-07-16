#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> cnt(static_cast<unsigned long>(n + m - 1), vector<int>(2));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cnt[i + j][a[i][j]]++;
            }
        }

        int ans = 0;
        for (int i = 0; i <= n + m - 2; i++) {
            int j = n + m - 2 - i;
            if (i <= j) continue;
            ans += min(cnt[i][0] + cnt[j][0], cnt[i][1] + cnt[j][1]);
        }

        cout << ans << "\n";

    }

    return 0;
}