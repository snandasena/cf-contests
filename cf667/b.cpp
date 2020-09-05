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

ll solve(ll a, ll b, ll x, ll y, ll n) {
    ll t = min(a - x, n);
    a -= t;
    n -= t;
    t = min(b - y, n);
    b -= t;

    return a * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    ll a, b, x, y, n;

    cin >> t;
    while (t--) {
        cin >> a >> b >> x >> y >> n;

        ll ans = min(solve(a, b, x, y, n), solve(b, a, y, x, n));
        cout << ans << "\n";
    }

    return 0;
}