#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    vector<string> v;
    while (true) {
        int dx = b[0] - a[0];
        int dy = b[1] - a[1];
        dx = (dx > 0) - (dx < 0);
        dy = (dy > 0) - (dy < 0);

        string s;
        if (dx > 0) s += 'R';
        if (dx < 0) s += 'L';
        if (dy > 0) s += 'U';
        if (dy < 0) s += 'D';

        if (s.length() == 0) break;
        v.emplace_back(s);
        a[0] += dx;
        a[1] += dy;
    }

    cout << v.size() << "\n";

    for (string &s: v) cout << s << "\n";
    return 0;
}