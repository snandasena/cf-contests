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

    ll t, n, x = -1;
    cin >> t;
    while (t--) {
        cin >> n;
        int f;
        cin >> f;
        int c = 0;
        for (int i = 1; i < n; i++) {
            cin >> x;
            if (f != x) c++;
        }
        if (c >0) cout << 1 << "\n";
        else cout << n << "\n";


    };

    return 0;
}