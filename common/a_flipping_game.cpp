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
    vector<int> v(n);
    for (int &i: v) cin >> i;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int ls = 0;
            for (int k = 0; k < n; ++k) {
                if (k >= i && k <= j) {
                    ls += 1 - v[k];
                } else {
                    ls += v[k];
                }
            }

            ans = max(ls, ans);
        }
    }

    cout << ans;
    return 0;
}