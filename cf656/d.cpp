#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int calc(const string &s, char c) {
    if (s.size() == 1) return s[0] != c;

    auto mid = static_cast<int>(s.size() / 2);
    int cntl = calc(string(s.begin(), s.begin() + mid), static_cast<char>(c + 1));
    cntl += s.size() / 2 - count(s.begin() + mid, s.end(), c);

    int cntr = calc(string(s.begin() + mid, s.end()), static_cast<char>(c + 1));
    cntr += s.size() / 2 - count(s.begin(), s.begin() + mid, c);

    return min(cntr, cntl);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << calc(s, 'a') << "\n";

    }
    return 0;
}