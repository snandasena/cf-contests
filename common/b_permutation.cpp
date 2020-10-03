#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x, ans = 0;
    cin >> n;
    vector<int> v(5001, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        v[x]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (!v[i]) ans++;
    }

    cout << ans;

    return 0;
}