#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    ll x, y, z;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        ll a = max(x, max(z, y));
        ll mn = min(x, min(y, z));
        int c = 0;
        if (a == x) {
            c++;
        }
        if (a == y) {
            c++;
        }
        if (a == z) {
            c++;
        }

        if (c == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << mn << " " << (mn == 1 ? 1 : mn - 1) << " " << a << "\n";
        }


    }

    return 0;
}