#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        auto ub = static_cast<ll >(sqrt(n));
        int ans = 0;
        for (ll i = ub; i > 0;) {
            ll mx = (i * (3 * i + 1)) / 2;
            if (n >= mx) {
                ans++;
                n -= mx;
                if (n > 1) i = static_cast<ll >(sqrt(n));
                else break;
            } else {
                i--;
            }
        }
        cout << ans << "\n";
    }


    return 0;
}