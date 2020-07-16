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
        vector<ll> v(n);
        for (ll &i: v) cin >> i;

        if (v[0] < v[n - 1]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
