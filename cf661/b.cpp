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

    int t, n;
    ll x;
    cin >> t;
    while (t--) {
        vector<pair<ll, int>> a;


        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a.emplace_back(x, i);
        }
        vector<ll> b(n);
        for (ll &i: b) cin >> i;
        ll ans = 0;
        sort(a.begin(), a.end());

        ll mna = a[0].first;
        ll mnb = *min_element(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
            ans += max(a[i].first - mna, b[a[i].second] - mnb);
        }

        cout << ans << "\n";

    }


    return 0;
}