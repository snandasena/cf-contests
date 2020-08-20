#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, t, l, r;
    ll x;
    cin >> n;
    vector<ll> v(n + 1, 0), a(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        v[i] = x;
        a[i] = x;
    }

    sort(a.begin() + 1, a.end());
    for (int i = 1; i <= n; ++i) {
        v[i] += v[i - 1];
        a[i] += a[i - 1];
    }

    cin >> m;
    while (m--) {
        cin >> t >> l >> r;
        ll sum = 0;
        if (t == 1) {
            sum = v[r] - v[l - 1];
        } else {
            sum = a[r] - a[l - 1];
        }
        cout << sum << "\n";
    }

    return 0;
}