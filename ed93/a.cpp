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

    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;

        ll a, b;
        cin >> a >> b;
        ll k = a + b;
        ll j = -1;
        for (ll i = 3; i <= n; i++) {
            cin >> x;
            if (x >= k) {
                j = i;
            }
        }

        if (j != -1) cout << "1 2 " << j << "\n";
        else cout << "-1\n";

    }

    return 0;
}