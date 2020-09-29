#include <bits/stdc++.h>

using namespace std;
using ll  = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll x, y, z;
    cin >> x >> y >> z;
    ll mx = (x + y) / z;
    ll a = x % z, b = y % z;
    ll mn = 0;
    if (a + b >= z) {
        mn = min(z - a, z - b);
    }

    cout << mx << ' ' << mn;

    return 0;
}