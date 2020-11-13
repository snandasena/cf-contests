#include <bits/stdc++.h>

using namespace std;
vector<bool> visited(100005);
long nodes;
vector<vector<int >> cities(100005);

void dfs(int n)
{
    nodes++;
    visited[n] = true;
    for (auto i = cities[n].begin(); i != cities[n].end(); ++i)
    {
        if (!visited[*i])
        {
            dfs(*i);
        }
    }
}

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road)
{
    long cost = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            nodes = 0;
            dfs(i);
            cost += c_lib;
            if (c_lib > c_road)
            {
                cost += (c_road * (nodes - 1));
            }
            else
            {
                cost += (c_lib * (nodes - 1));
            }
        }
    }

    return cost;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ofstream fout(getenv("OUTPUT_PATH"));

    int q, n, m, x, y, c_lib, c_road;
    cin >> q;

    while (q--)
    {
        cin >> n >> m >> c_lib >> c_road;
        for (int i = 1; i <= m; i++)
        {
            cin >> x >> y;
            cities[x].emplace_back(y);
            cities[y].emplace_back(x);
        }

        long result = roadsAndLibraries(n, c_lib, c_road);
        fout << result << "\n";
        for (int i = 0; i <= n; ++i)
        {
            cities[i].clear();
            visited[i] = false;
        }
    }

    fout.close();

    return 0;
}