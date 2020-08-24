#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        vector<int> v;
        v.emplace_back(0);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'R') v.emplace_back(i + 1);
        }

        v.emplace_back(s.length() + 1);
        int ans = 0;
        for (int i = 0; i < v.size() - 1; ++i) {
            ans = max(v[i + 1] - v[i], ans);
        }
        cout << ans << "\n";
    }

    return 0;
}