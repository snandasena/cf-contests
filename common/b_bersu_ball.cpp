#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n;
    vector<int> b(n);
    for (int &i: b) cin >> i;
    cin >> m;
    vector<int> g(m);
    for (int &i: g) cin >> i;

    sort(g.begin(), g.end());
    sort(b.begin(), b.end());

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (b[i] > 0 && g[j] > 0 && abs(b[i] - g[j]) <= 1) {
                ans++;
                b[i] = 0;
                g[j] = 0;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}