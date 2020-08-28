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
    vector<ll> v(n);

    for (ll &i: v) cin >> i;

    sort(v.begin(), v.end());

    for (int i = 1; i < n - 1; ++i) {
        if (v[i - 1] + v[i] > v[i + 1]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}