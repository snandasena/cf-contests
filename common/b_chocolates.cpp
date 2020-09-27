#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i: v) cin >> i;

    ll ans = 0;
    ll curr = INFINITY;
    for (int i = n - 1; i >= 0; --i) {
        curr = min(curr - 1, v[i]);
        curr = max(0ll, curr);
        ans += curr;
    }

    cout << ans;


    return 0;
}