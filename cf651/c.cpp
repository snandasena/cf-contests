#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

bool isprime(ll x) {
    for (ll d = 2; d * d <= x; d++) {
        if (x % d == 0) return false;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    ll x;
    cin >> t;
    while (t--) {
        cin >> x;
        bool ok = (x == 1);
        if (x > 2 && x % 2 == 0) {
            if ((x & (x - 1)) == 0) {
                ok = true;
            } else if (x % 4 != 0 && isprime(x / 2)) {
                ok = true;
            }
        }

        if (ok) {
            cout << "FastestFinger\n";
        } else {
            cout << "Ashishgup\n";
        }
    }

    return 0;
}
