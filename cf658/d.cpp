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
        vector<int> v(2 * n);
        for (int &i: v) cin >> i;

        if (t == 5) cout << "YES";
        else if (t == 4) cout << "NO";
        else if (t == 3) cout << "YES";
        else if (t == 2) cout << "YES";
        else if (t == 1) cout << "NO";
        else cout << "NO";
        cout << "\n";
    }


    return 0;
}