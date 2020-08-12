#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    ll f = 1, bp = 1;
    for (ll i = 1; i <= n - 1; ++i) {
        bp *= 2;
        f *= i;
        f %= mod;
        bp %= mod;
    }

    f *= n;
    f %= mod;
    f -= bp;
    f %= mod;
    if (f < 0) f += mod;
    cout << f;
}