#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    int visited[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            visited[i][j] = 0;
        }
    }
    cout << sx << " " << sy << "\n";
    for (int i = sx; i <= n; i++) {
        for (int j = 1; j <= m + 1; j++) {
            if (i == sx && j == sy) continue;
            else {
                if (j == m + 1 && i == n) {
                    if (!visited[i + 1][j]) {
                        cout << i + 1 << " " << j << "\n";
                        visited[i + 1][j] = 1;
                    }
                } else {
                    cout << i << " " << j << "\n";
                    visited[i][j] = 1;
                }
            }
        }
    }

    for(int i = sx-1; i>=1; i--){
        for (int j = 1; j < ; ++j) {

        }
    }


    return 0;
}