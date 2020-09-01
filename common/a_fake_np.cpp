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

    int l, r;
    cin >> l >> r;

    if (r - l > 2) cout << 2;
    else if (l % 2 == 0 && r % 2 == 0) cout << 2;
    else cout << l;

    return 0;
}