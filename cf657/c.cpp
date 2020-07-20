#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll n, m, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<pair<ll, ll>> v(m);
        for (int i = 0; i < m; ++i) {
            cin >> a >> b;
            v.emplace_back(a, b);
        }

        sort(v.begin(), v.end(), greater<ll>());


    }

    return 0;
}