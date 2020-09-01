#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    ll x;
    cin >> t;
    while (t--) {
        cin >> n;
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x <= 2048) sum += x;
        }

        if (sum >= 2048) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}