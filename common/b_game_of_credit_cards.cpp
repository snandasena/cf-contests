#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string s, m;
    cin >> n >> s >> m;
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());

    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi + 1) >> 1;
        int pos = n - mid;
        bool ok = true;
        for (int i = 0; i < mid; ++i) {
            if (s[i] > m[pos + i]) {
                ok = false;
                break;
            }
        }

        if (ok) lo = mid;
        else hi = mid - 1;
    }

    cout << n - lo << "\n";

    lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi + 1) >> 1;
        int pos = n - mid;
        bool ok = true;
        for (int i = 0; i < mid; ++i) {
            if (s[i] >= m[pos + i]) {
                ok = false;
                break;
            }
        }

        if (ok) lo = mid;
        else hi = mid - 1;

    }
    cout << lo;
    return 0;
}