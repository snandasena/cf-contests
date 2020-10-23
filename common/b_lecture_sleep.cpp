#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n), t(n),prefix(n);
    for (int &i: a) cin >> i;
    for (int &i: t) cin >> i;

    int ans = 0, premx = 0;
    for (int j = 0; j < n; ++j) {
        if (j) prefix[j] += prefix[j - 1];

        if (t[j] == 0) prefix[j] += a[j];
        else ans += a[j];
    }

    for (int i = k - 1; i < n; ++i) {
        premx = max(premx, prefix[i] - (i >= k ? prefix[i - k] : 0));
    }
    ans += premx;
    cout << ans;
    return 0;
}