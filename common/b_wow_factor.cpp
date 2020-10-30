#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    ll a = 0, b = 0, c = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'o') {
            b += a;
        } else if (i > 0 && s[i - 1] == 'v') {
            a++;
            c += b;
        }
    }

    cout << c;

    return 0;
}