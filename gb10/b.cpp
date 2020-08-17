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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<ll> v(n);
        for (ll &i: v) cin >> i;

        if (k % 2 == 0) k = 2;
        else k = 1;

        for (int j = 0; j < k; ++j) {
            ll mx = *max_element(v.begin(), v.end());
            for (ll i = 0; i < n; ++i) {
                v[i] = mx - v[i];
            }

        }
        for (ll &i: v) cout << i << " ";
        cout << "\n";
    }

    return 0;
}