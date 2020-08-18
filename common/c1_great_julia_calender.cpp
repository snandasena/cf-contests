#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    int ans = 0;

    while (n) {
        ll t = n;
        ll d = 0;
        while (t) {
            d = max(d, t % 10);
            t /= 10;
        }
        n -= d;
        ans++;
    }
    cout << ans;

    return 0;
}