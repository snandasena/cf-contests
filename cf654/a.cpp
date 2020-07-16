#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        if (x % 2 == 0) cout << x / 2 << "\n";
        else cout << x / 2 + 1 << "\n";

    }


    return 0;
}