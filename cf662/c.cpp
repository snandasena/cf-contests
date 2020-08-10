#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            mp[x]++;
        }

        int mx = 0;
        for (auto &p: mp) {
            mx = max(mx, p.second);
        }

        int rep = 0;

        for (auto &p: mp) {
            rep += (p.second == mx);
        }

        cout << (n - rep) / (mx - 1) - 1 << "\n";

    }

    return 0;
}