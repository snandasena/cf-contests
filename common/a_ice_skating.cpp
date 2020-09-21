#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, ans = 1;
    string a, b, c;
    map<string, int> mp;
    mp["polycarp"] = 1;

    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        for (char &i : a) {
            i = static_cast<char>(tolower(i));
        }

        for (char &i: c) {
            i = static_cast<char>(tolower(i));
        }

        int cnt = mp[c] + 1;
        ans = max(cnt, ans);
        mp[a] = cnt;

    }

    cout << ans;

    return 0;
}