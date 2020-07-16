#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll &i: v) cin >> i;

        vector<ll> w(k);
        for (ll &i: w) cin >> i;

        sort(v.begin(), v.end());
        sort(w.begin(), w.end());

        ll ans = 0;
        for (ll i = n - k; i < n; i++) {
            ans += v[i];
        }

        for (ll i = 0, j = n - k; i < k; i++) {
            j -= w[i] - 1;

            if (w[i] == 1) {
                ans += v[n - i - 1];
            } else {
                ans += v[j];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}