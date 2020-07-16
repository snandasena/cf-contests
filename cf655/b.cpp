#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) cout << n / 2 << " " << n / 2 << "\n";
        else {
            ll k = -1;
            for (ll i = 3; i * i <= n; i++) {
                if (n % i == 0) {
                    k = i;
                    break;
                }
            }

            if (k == -1) {
                cout << 1 << " " << n - 1 << "\n";
            } else {
                cout << n / k << " " << n - (n / k) << "\n";
            }
        }

    }
    return 0;
}