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

ll binpow(ll a, ll b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i: v) cin >> i;
    sort(v.begin(), v.end());
    ll ans = INFINITY;
    for (ll i = 1;; ++i) {
        ll step = 1;
        ll curr = 0;
        for (ll j = 0; j < n; ++j) {
            curr += abs(step - v[j]);
            if (curr > ans) break;
            step *= i;
        }

        if (curr > ans) break;
        ans = curr;
    }

    cout << ans;

    return 0;
}