#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        pair<ll, char> z[3] = {{0, 'S'}, {0, 'P'},{ 0, 'R'}};

        for (auto &u :s) {
            z[(u == 'R' ? 1 : u == 'S' ? 2 : 0)].first++;
        }

        sort(z, z + 3);

        for (int i = 0; i < s.size(); i++) {
            cout << z[2].second;
        }
        cout << "\n";
    }
    return 0;
}