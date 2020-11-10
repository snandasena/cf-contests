#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int ans = 0, r = static_cast<int>(s.length());
        while (s[r - 1] == '0' && r >= 1) r--;

        for (int i = 1; i < r; ++i)
        {
            if (s[i] == '0' && s[i - 1] == '1')
            {
                while (s[i] == '0' && i < r)
                {
                    ++i;
                    ++ans;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}