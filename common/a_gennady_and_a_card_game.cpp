#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a, b;
    int n = 5;
    cin >> a;
    while (n--)
    {
        cin >> b;
        if (a[0] == b[0] || a[1] == b[1])
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}