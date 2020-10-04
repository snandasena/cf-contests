#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    string s;
    s += s1[0];
    for (int i = 1; i < s1.length(); ++i) {
        if (s1[i] >= s2[0]) break;
        s += s1[i];
    }

    s += s2[0];
    cout << s;

    return 0;
}