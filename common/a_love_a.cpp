#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int n = static_cast<int>(s.length());
    int cnt = 0;
    for (char &c: s)
    {
        if (c == 'a') cnt++;
    }

    cout << min(n, 2 * cnt - 1);
    return 0;
}