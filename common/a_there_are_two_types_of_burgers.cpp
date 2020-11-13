#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, b, p, f, h, c;
    cin >> t;
    while (t--)
    {
        cin >> b >> p >> f >> h >> c;
        b /= 2;
        if (h < c)
        {
            swap(h, c);
            swap(p, f);
        }
        int ans = 0;
        int cnt = min(b, p);
        b -= cnt;
        p -= cnt;

        ans += h * cnt;
        cnt = min(b, f);
        b -= cnt;
        f -= cnt;
        ans += c * cnt;

        cout << ans << "\n";
    }

}