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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int &i: v) cin >> i;

    int ans = 0;
    for (int i = 0; i < m; ++i)
        ans += __builtin_popcount(v[i] ^ v[m]) <= k;


    cout << ans;

    return 0;
}