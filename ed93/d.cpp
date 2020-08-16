#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int N = 200;
int r, g, b;
int R[N], G[N], B[N];
int dp[N + 1][N + 1][N + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> g >> b;
    for (int i = 0; i < r; ++i) cin >> R[i];
    for (int i = 0; i < g; ++i) cin >> G[i];
    for (int i = 0; i < b; ++i) cin >> B[i];

    sort(R, R + r);
    sort(G, G + g);
    sort(B, B + b);

    for (int i = 0; i <= r; ++i) {
        for (int j = 0; j <= g; ++j) {
            for (int k = 0; k <= b; ++k) {
                if (i && j) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k] + R[i - 1] * G[j - 1]);
                }

                if (i && k) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k - 1] + R[i - 1] * B[k - 1]);
                }

                if (j && k) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j - 1][k - 1] + G[j - 1] * B[k - 1]);
                }
            }
        }
    }

    cout << dp[r][g][b];
    return 0;
}