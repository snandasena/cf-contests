#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;

        bool e = false, o = false;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) {
                o |= ((s[i - 1] - '0') % 2 == 1);
            } else {
                e |= ((s[i - 1] - '0') % 2 == 0);
            }

        }

        if (n % 2 == 1) {
            cout << (o ? 1 : 2) << "\n";
        } else {
            cout << (e ? 2 : 1) << "\n";
        }

    }

    return 0;
}