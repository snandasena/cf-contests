#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using li = long long int;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q, t, v;
    vector<li> vc;
    make_heap(vc.begin(), vc.end(), greater<li>());
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> v;
            vc.emplace_back(v);
            push_heap(vc.begin(), vc.end(), greater<li>());
        }
        else if (t == 3)
        {
            cout << vc.front() << "\n";
        }
        else
        {
            cin >> v;
            vector<li>::iterator i;
            for (i = vc.begin(); i != vc.end(); ++i)
            {
                if (*i == v)
                {
                    vc.erase(i);
                    break;
                }
            }
            make_heap(i, vc.end(), greater<li>());
        }
    }

    return 0;
}
