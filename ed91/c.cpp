#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (ll &i: v) cin >> i;

        sort(v.begin(), v.end(), greater<ll>());

        ll ans = 0, tsize = 1;
        for (ll &i: v) {
            if (i * tsize >= x) {
                ans++;
                tsize = 0;
            }

            tsize++;
        }

        cout << ans << "\n";

    }

    return 0;
}


// 2 5 7 9 11