#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void calc(vector<int> &v, int &n) {
    vector<ll> dl(n + 1), dr(n + 1);
    dl[0] = -1;
    dr[0] = 0;
    for (int i = 0; i < n; ++i) {
        dl[i + 1] = max(dl[i], dr[i] + v[i]);
        dr[i + 1] = max(dr[i], dl[i] - v[i]);
    }

    cout << max(dl.back(), dr.back()) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, q;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        calc(v, n);

    }

    return 0;
}