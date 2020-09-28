#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m, s;
    cin >> m >> s;

    vector<pair<int, int >> moment(m);
    for (auto &p : moment) {
        cin >> p.first >> p.second;
    }

    sort(moment.begin(), moment.end());
    int curr_pos = 0;
    int ans = 0;
    while (!moment.empty()) {
        if (curr_pos < moment[0].first && curr_pos + s < moment[0].first) {
            curr_pos += s;
        } else {
            curr_pos++;
            ans++;
        }


        if (curr_pos >= moment[0].second) moment.erase(moment.begin());
    }

    cout << ans;

    return 0;
}