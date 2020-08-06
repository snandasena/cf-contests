#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
const int N = 1025;
vector<int> in;
vector<bool> is;

bool check(int n, int k) {
    for (int i = 1; i <= n; i++) {
        if (!is[in[i-1] ^ k]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        in.resize(n);
        is.resize(n + 1, false);

        for (int &i: in) {
            cin >> i;
            is[i] = true;
        }

        bool ok = false;
        for (int i = 1; i < 1024; i++) {
            if (check(i, n)) {
                cout << i << "\n";
                ok = true;
                break;
            }
        }

        if (!ok) {
            cout << "-1\n";
        }

    }

    return 0;
}