#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, b;
    cin >> n >> b;
    vector<int> v(n);
    for (int &i: v) cin >> i;
    int c1 = 0, c2 = 0;
    vector<int> costs;
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] % 2) c1++;
        else c2++;
        if (c1 == c2) costs.emplace_back(abs(v[i] - v[i + 1]));
    }

    sort(costs.begin(), costs.end());
    int ans = 0;
    int curr = 0;
    for (int i = 0; i < costs.size() && costs[i] + curr <= b; i++) {
        ++ans;
        curr += costs[i];
    }

    cout << ans;

    return 0;
}