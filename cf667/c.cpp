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

    int t, n, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        cout << x << " " << y << " ";
        int k = y + (y - x);
        for (int i = 0; i < n - 2; ++i) {
            cout << k << " ";
            k += (y - x);
        }

        cout << "\n";
    }

    return 0;
}