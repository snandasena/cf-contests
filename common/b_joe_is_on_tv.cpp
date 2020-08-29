#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    double ans = 0.0;
    for (int i = 1; i <= n; ++i) {
        ans += 1.0 / i;
    }
    cout << fixed << setprecision(12) << ans;
    return 0;
}