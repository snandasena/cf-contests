#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if (k1 > k2) {
        swap(k1, k2);
        swap(a1, a2);
    }

    ll cnt = a1 * (k1 - 1) + a2 * (k2 - 1);
    ll mn = n - cnt;
    if (mn <= 0) mn = 0;

    ll mx = n / k1;
    cnt = a1 * k1;
    if (n > cnt) {
        mx = a1 + (n - a1 * k1) / k2;
    }

    cout << mn << " " << mx;

    return 0;

}