#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t, n, s, k, x;
    cin >> t;
    while (t--) {
        cin >> n >> s >> k;
        set<ll> v;
        for (int i = 1; i <= k; ++i) {
            cin >> x;
            v.insert(x);
        }

        for (ll i = 0;; ++i) {
            if (s - i >= 1 && v.find(s - i) == v.end()) {
                cout << i;
                break;
            }

            if (s + i <= n && v.find(s + i) == v.end()) {
                cout << i;
                break;
            }
        }

        cout << "\n";

    }

    return 0;
}