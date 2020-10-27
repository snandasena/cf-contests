#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int INF = 1000000;
int a[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }

    bool f = 0;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        f = 0;
        for (int j = 1; j <= m; ++j) {
            f = f || a[i][j];
            ans += f * (1 - a[i][j]);
        }

        f = 0;
        for (int j = m; j >= 1; j--) {
            f = f || a[i][j];
            ans += f * (1 - a[i][j]);
        }
    }

    for (int i = 1; i <= m; i++) {
        f = 0;
        for (int j = 1; j <= n; j++) {
            f = f || a[j][i];
            ans += f * (1 - a[j][i]);
        }

        f = 0;
        for (int j = n; j >= 1; j--) {
            f = f || a[j][i];
            ans += f * (1 - a[j][i]);
        }
    }
    cout << ans;
    return 0;
}