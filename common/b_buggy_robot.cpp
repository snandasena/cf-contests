#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int dx = 0;
    int dy = 0;
    for (char &c: s) {
        if (c == 'U') dy++;
        else if (c == 'D') dy--;
        else if (c == 'L') dx--;
        else dx++;
    }

    cout << n - (abs(dx) + abs(dy));
    return 0;

}