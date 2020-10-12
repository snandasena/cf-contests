#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, x, o, e, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i: v) cin >> i;

    for (int i = 0; i < k; ++i) {
        o = 0;
        e = 0;
        for (int j = i; j < n; j += k) {
            if (v[j] == 1) o++;
            else e++;
        }

        ans += min(o, e);
    }

    cout << ans;
    return 0;
}