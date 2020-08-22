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
    ll x1, x2, x3, y1, y2, y3;
    cin >> t;
    while (t--) {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
        ll ans = 0;
        ll c = min(x3, y2);
        ans = c * 2;
        x3 -= c;
        y2 -= c;

        c = min(x2, y1 + y2);
        x2 -= c;
        ans -= 2 * x2;
        cout << ans << "\n";
    }

    return 0;
}