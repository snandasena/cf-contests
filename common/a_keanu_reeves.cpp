#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, bal = 0;
    string s;
    cin >> n >> s;
    for (char &c: s)
    {
        if (c == '0') bal++;
        else bal--;
    }

    if (bal != 0) cout << 1 << "\n" << s;
    else cout << 2 << "\n" << s.substr(0, n - 1) << " " << s.substr(n - 1, n);
    return 0;
}