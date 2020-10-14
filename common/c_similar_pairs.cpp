#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;

        sort(v.begin(), v.end());
        int c1 = 0, e = 0, o = 0;

        for (int i = 0; i < n; ++i) {
            if (i > 0 && v[i] - v[i-1] == 1) c1++;
            if (v[i] % 2 == 0) e++;
            else o++;
        }

        string ans;
        if (o % 2) {
            ans = (c1 ? "YES\n" : "NO\n");
        } else {
            ans = "YES\n";
        }

        cout << ans;
    }

    return 0;

}