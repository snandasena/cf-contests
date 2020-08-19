#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    auto sgn = [&](int x) {
        if (x > 0) return 1;
        else return -1;
    };

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int &i: v)cin >> i;

        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            int curr = v[i];
            int j = i;
            while (j < n && sgn(v[i]) == sgn(v[j])) {
                curr = max(curr, v[j]);
                ++j;
            }
            sum += curr;
            i = j - 1;
        }

        cout << sum << "\n";
    }
    return 0;
}