#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n), l(n);
        for (int &i: a) cin >> i;

        for (int &i: l) cin >> i;

        vector<int> unlock, order;
        for (int i = 0; i < n; ++i) {
            if (l[i] == 0) unlock.emplace_back(i);
        }

        order = unlock;
        sort(order.begin(), order.end(), [&](int x, int y) {
            return a[x] > a[y];
        });

        vector<int> b = a;
        for (int i = 0; i < unlock.size(); ++i) {
            b[unlock[i]] = a[order[i]];
        }


        for (int &i: b) cout << i << ' ';
        cout << '\n';

    }

    return 0;
}