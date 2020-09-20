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

    int t, n, x, k;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int cnt = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> k;
            cnt += (x == k);
            sum += k;
        }

        if (cnt == n) cout << "0\n";
        else if (cnt > 0)cout << "1\n";
        else if (sum == n * x) cout << "1\n";
        else cout << "2\n";
    }

    return 0;
}