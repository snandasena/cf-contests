#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

vector<vector<pair<int, int>>> g;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<vector<int>> a(2, vector<int>(n));
        vector<vector<int>> pos(n);
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                --a[i][j];
                pos[a[i][j]].emplace_back(j);
            }
        }

        bool bad = false;
        g = vector<vector<pair<int, int >>>(n);


        

    }

    return 0;
}