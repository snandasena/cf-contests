#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, x;
    cin >> n >> m;
    int gmx = 0;
    for (int i = 0; i < n; ++i) {
        int mx = INFINITY;
        for (int j = 0; j < m; ++j) {
            cin >> x;
            mx = min(x, mx);
        }

        gmx = max(gmx, mx);
    }

    cout << gmx;

    return 0;
}