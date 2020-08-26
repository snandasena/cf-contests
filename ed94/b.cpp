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
    int t;
    ll p, f, cs, cw, s, w;
    cin >> t;
    while (t--) {
        cin >> p >> f >> cs >> cw >> s >> w;
        if (s > w) {
            swap(cs, cw);
            swap(s, w);
        }

        ll ans = 0;
        for (int mys = 0; mys <= cs; ++mys) {
            ll take = mys * s;
            if (take <= p) {
                ll left = p - take;
                ll myw = left / w;
                ll leftw = cw - myw;
                ll lefts = cs - mys;

                ll takes = min(f / s, lefts);
                ll fleft = f - takes * s;
                ll takew = min(fleft / w, leftw);
                ll mx = mys + myw + takes + takew;

                ans = max(ans, mx);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}