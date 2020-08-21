#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int n, a[16];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < (1 << n); ++i) {
        int cr = 0;
        for (int j = 0; j < n; ++j) {
            cr += (i >> j & 1) ? a[j] : -a[j];
        }
        if (cr % 360 == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}