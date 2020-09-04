#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, x;
    cin >> n >> k;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.emplace_back(x, i + 1);
    }
    sort(v.begin(), v.end());

    int sum = 0;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        sum += v[i].first;
        if (sum <= k) {
            ans.emplace_back(v[i].second);
        } else {
            break;
        }
    }

    cout << ans.size() << "\n";
    for (int &i: ans) cout << i << " ";
    return 0;
}