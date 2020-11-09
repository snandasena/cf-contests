#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    map<char, int> mp;
    for (char &c: s) mp[c]++;
    int no = mp['n'];
    mp['o'] -= no;
    mp['z'] -= no;
    int nz = mp['r'];

    for(int i=0; i< no; ++i) cout<<"1 ";

    for(int i=0; i< nz ; ++i) cout<<"0 ";
    return 0;
}