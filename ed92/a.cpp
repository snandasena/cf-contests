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

    int t;
    ll l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        if (2 * l <= r) cout << l << " " << 2 * l << "\n";
        else cout << "-1 -1\n";

    }

    return 0;
}