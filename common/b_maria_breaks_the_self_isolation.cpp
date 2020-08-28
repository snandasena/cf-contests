#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;

        sort(v.begin(), v.end());

        int ans = 1;
        for (int i = n - 1; i >= 0; --i) {
            if (v[i] <= i + 1) {
                ans = i + 2;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}