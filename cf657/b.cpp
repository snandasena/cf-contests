#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll l, r, m;
    cin >> t;
    while (t--) {
        cin >> l >> r >> m;

        for (ll i = l; i <= r; i++) {
            ll t1 = m % i, t2 = i - m % i;

            if (t1 <= r - l && m >= i) {
                cout << i << " " << l + t1 << " " << l << "\n";
                break;
            }


            if (t2 <= r - l) {
                cout << i << " " << l << " " << l + t2 << "\n";
                break;
            }
        }
    }

    return 0;
}