#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            if (i == 0 && x == 1) {
                cout << 2;
                return 0;
            } else if (j == 0 && x == 1) {
                cout << 2;
                return 0;
            } else if (j == m - 1 && x == 1) {
                cout << 2;
                return 0;
            } else if (i == n - 1 && x == 1) {
                cout << 2;
                return 0;
            }
        }
    }

    cout << 4;
    return 0;
}