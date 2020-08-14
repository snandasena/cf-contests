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
    cout << sx << " " << sy << "\n";

    for (int i = 1; i <= n; ++i) {
        if (i != sx) cout << i << " " << sy << "\n";
    }

    for (int i = 1; i <= m; ++i) {
        if (i == sy) continue;

        int dir = (i & 1);
        if (i > sy) dir ^= 1;
        if (dir == 1) {
            for (int j = n; j; --j) {
                cout << j << " " << i << "\n";
            }
        } else {
            for (int j = 1; j <= n; ++j) {
                cout << j << " " << i << "\n";
            }
        }
    }

    return 0;
}