#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using li = long long int;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    priority_queue<int, vector<int>, greater<int>> pq, pqdel;
    int q, t, v;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> v;
            pq.emplace(v);
        }
        else if (t == 2)
        {
            cin >> v;
            pqdel.emplace(v);
        }
        else
        {
            while (!pq.empty() && !pqdel.empty() && pq.top() == pqdel.top())
            {
                pq.pop();
                pqdel.pop();
            }
            cout << pq.top() << "\n";
        }
    }
    return 0;
}
