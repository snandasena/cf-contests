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

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k >= n) cout << (k - n);
        else {
            int x = (k + n) / 2;
            if (2 * x - n == k) cout << 0;
            else cout << 1;
        }

        cout << "\n";
    }

    return 0;
}