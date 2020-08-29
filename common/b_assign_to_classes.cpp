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
        vector<int> v(2 * n);
        for (int &i: v) cin >> i;
        sort(v.begin(), v.end());

        cout << v[n] - v[n - 1] << "\n";
    }

    return 0;
}