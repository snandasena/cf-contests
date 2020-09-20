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

ll cal(ll x) {
    return x * (x + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll n;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        for (int i = 1; cal((1ll << i) - 1) <= n; ++i) {
            ans++;
            n -= cal((1ll << i) - 1);
        }

        cout << ans << "\n";

    }


    return 0;
}