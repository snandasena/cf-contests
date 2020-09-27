#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll l, r;
    cin >> l >> r;
    int n = (r - l + 1) / 2;
    cout << "YES\n";
    for (int i = 1; i <= n; ++i) {
        cout << r << ' ' << r - 1 << '\n';
        r -= 2;
    }

    return 0;
}