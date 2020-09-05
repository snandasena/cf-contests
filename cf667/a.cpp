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

    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int r = abs(a - b);
        int x = r / 10;
        if (r % 10 != 0) x++;

        cout << x << "\n";

    }

    return 0;
}