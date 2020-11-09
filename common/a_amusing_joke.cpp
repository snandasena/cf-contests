#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a, b, p;
    cin >> a >> b >> p;

    a += b;
    sort(a.begin(), a.end());
    sort(p.begin(), p.end());
    if (a == p) cout << "YES";
    else cout << "NO";

    return 0;
}