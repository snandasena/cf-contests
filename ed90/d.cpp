#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v;
        int x;
        ll esum = 0;
        ll osum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
            if (i % 2 == 0) {
                esum += x;
            } else {
                osum += x;
            }
        }

        cout << esum << " " << osum << "  " << max(esum, osum);
        cout << "\n";

    }

    cout << "\n";
    return 0;
}
