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
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        int mn = INFINITY;
        for (int &i: v) {
            cin >> i;
            mn = min(i, mn);
        }

        vector<int> a, b;
        for (int i = 0; i < n; ++i) {
            if (v[i] % mn == 0) {
                a.emplace_back(v[i]);
                b.emplace_back(i);
            }
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < b.size(); ++i) {
            v[b[i]] = a[i];
        }

        if (is_sorted(v.begin(), v.end())) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}