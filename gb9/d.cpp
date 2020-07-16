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
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;

        vector<int> res;
        while (n > 0) {
            vector<bool> was(n, false);
            for (int &i: v) {
                if (i < n) {
                    was[i] = true;
                }
            }

            int mex = 0;
            while (mex < n && was[mex]) {
                mex++;
            }

            if (mex == n) {
                res.emplace_back(n - 1);
                v[n - 1] = mex;
                n--;
                continue;
            }


            res.emplace_back(mex);
            v[mex] = mex;
        }

        cout << res.size() << "\n";
        for (int &i: res) {
            cout << i+1 << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    return 0;
}
