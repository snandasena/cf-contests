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

    int t, n, x;

    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(2 * n + 1, 0);
        for (int i = 0; i < n; ++i) {
            cin >> x;
            v[x]++;
        }

        int ans = 0;
        for (int s = 0; s <= 2 * n; s++) {
            int curr = 0;
            for (int i = 0; i < s - i; ++i) {
                curr += min(v[i], v[s - i]);
            }

            if (s % 2 == 0) curr += v[s / 2] / 2;
            ans = max(ans, curr);
        }

        cout << ans << "\n";
    }


    return 0;
}