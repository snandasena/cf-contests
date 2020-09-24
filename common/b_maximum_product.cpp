#include <bits/stdc++.h>

using namespace std;
using ll  = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> v(n);
        ll mx = -INFINITY;
        for (ll &i: v) {
            cin >> i;
            mx = max(mx, i);
        };
        sort(v.begin(), v.end(), [&](ll x, ll y) {
            return abs(x) > abs(y);
        });

        if (mx < 0) {
            cout << v[n - 1] * v[n - 2] * v[n - 3] * v[n - 4] * v[n - 5] << '\n';
            continue;
        };


        ll ans = v[0] * v[1] * v[2] * v[3] * v[4];
        for (int i = 5; i < n; ++i) {
            for (int j = 0; j < 5; ++j) {
                ll tmp = v[i];
                for (int k = 0; k < 5; ++k) {
                    if (k != j) tmp *=v[k];
                }
                ans = max(ans, tmp);
            }
        }

        cout << ans << '\n';

    }

    return 0;
}