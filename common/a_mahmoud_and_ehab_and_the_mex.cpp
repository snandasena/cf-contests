#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v(101, 0);
    int n, x, k;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        v[k]++;
    }
    int ans = v[x];
    for (int i = 0; i < x; ++i) {
        if (v[i] == 0) ans++;
    }

    cout << ans;

    return 0;
}
