#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, ans = 0, curr, best, worst;
    cin >> n >> curr;
    best = worst = curr;
    n--;
    while (n--)
    {
        cin >> curr;
        if (curr < worst)
        {
            worst = curr;
            ans++;
        }
        else if (curr > best)
        {
            best = curr;
            ans++;
        }
    }

    cout << ans;

    return 0;
}