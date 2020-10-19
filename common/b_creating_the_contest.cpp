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
    for (int j = 0; j < n; ++j) {
        int i = j;
        while (i + 1 < n && v[i + 1] <= v[i] * 2) i++;

        ans = max(ans, i-j + 1);
        j = i;
    }

    cout << ans;

    return 0;
}