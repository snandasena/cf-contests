#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    vector<int> v(26, 0);
    string s;
    cin >> n >> s;

    for (char &c: s)
    {
        v[tolower(c) - int('a')]++;
    }
    for (int &i: v)
    {
        if (!i)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
