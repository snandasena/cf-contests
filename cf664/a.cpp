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

bool test(ll r, ll g, ll b, ll w) {
    if (r < 0 || g < 0 || b < 0) return false;
    int c = (r % 2 == 1) + (g % 2 == 1) + (b % 2 == 1) + (w % 2 == 1);
    return c <= 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll r, g, b, w;
    cin >> t;

    while (t--) {
        cin >> r >> g >> b >> w;
        if (test(r, g, b, w) || test(r - 1, g - 1, b - 1, w + 3)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }


    return 0;
}