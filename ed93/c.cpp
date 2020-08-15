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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        vector<int> v(n * 10, 0);
        int bal = n;
        ll ans = 0;
        v[bal]++;

        for (int i = 0; i < n; ++i) {
            bal += (s[i] - '0') - 1;
            ans += v[bal];
            v[bal]++;
        }

        cout << ans << "\n";
    }

    return 0;
}