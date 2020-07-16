#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;

        vector<ll> v;
        v.push_back(a - n);
        v.push_back(a - m);
        v.push_back(b - n);
        v.push_back(b - m);
        v.push_back(a + b - (n + m));
        v.push_back(a + b - n);
        v.push_back(a + b - m);

        ll mn = INFINITY;
        for (auto i: v) {
            mn = min(i, mn);
        }

        if (mn < 0) cout << "No\n";
        else cout << "Yes\n";


    }

    return 0;
}