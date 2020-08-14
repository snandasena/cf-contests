#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, x;
    cin >> t;
    while (t--) {
        int sum = 0;
        bool e = false, o = false;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
            e |= x % 2 == 0;
            o |= x % 2 == 1;
        }

        if (sum % 2 != 0 || (o & e)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}