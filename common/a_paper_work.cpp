#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x, c = 0, nc = 0;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x < 0) {
            nc++;
            if (nc >= 3) {
                ans.emplace_back(c);
                nc = 1;
                c = 0;
            }
        }
        c++;
    }
    ans.emplace_back(c);
    cout << ans.size() << "\n";
    for (int &i: ans) cout << i << " ";
    return 0;
}