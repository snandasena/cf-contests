#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        bool ok = true;
        for (int i = 0; i < n - 1; ++i) {
            int diff = max(0, v[i + 1] - k);
            if (v[i] >= diff) {
                m += v[i] - diff;
            } else {
                m -= diff - v[i];
            }

            if (m < 0) ok = false;

        }
        cout << (ok ? "YES\n" : "NO\n");

    }

    return 0;
}