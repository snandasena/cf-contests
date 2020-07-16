#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll &i: v)cin >> i;

    if (v.size() == 1) cout << v[0];
    else {

        sort(v.begin(), v.end());
        ll ans = 0;
        for (ll i = 1; i < n; i++) {
            ans += v[i];
        }
        cout << ans;
    }

    return 0;
}