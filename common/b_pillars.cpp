#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n;
    int v[n];
    int mxp = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v[i] = x;
        if (x > mx) {
            mx = x;
            mxp = i;
        }
    }

    bool c1 = is_sorted(v, v + mxp);
    bool c2 = is_sorted(v + mxp, v + n, greater<>());

    if (c1 & c2) cout << "YES";
    else cout << "NO";

    return 0;
}