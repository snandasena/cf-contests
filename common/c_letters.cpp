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

    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1, 0), dp(n + 1, 0);
    ll x;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        dp[i] = dp[i - 1] + a[i];
    }

    for (int i = 1; i <= m; ++i) {
        cin >> x;
        if (x == dp[n]) cout << n << " " << a[n];
        else {
            ll idx = lower_bound(dp.begin(), dp.end(), x) - dp.begin();
            cout << idx << " " << x - dp[idx - 1];
        }
        cout << "\n";
    }


    return 0;
}