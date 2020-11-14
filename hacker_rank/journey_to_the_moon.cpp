#include <bits/stdc++.h>

using ll =long long;
using namespace std;
const int MAX = 100005;
vector<vector<int>> adj(MAX);
vector<bool> visited(MAX);
int vertices;

void dfs(int n)
{
    vertices++;
    visited[n] = true;
    for (vector<int>::iterator i = adj[n].begin(); i != adj[n].end(); ++i)
    {
        if (!visited[*i])
        {
            dfs(*i);
        }
    }
}

// Complete the journeyToMoon function below.
ll journeyToMoon(int n)
{
    if (n == 0) return 0;
    int n_compnts = 0;
    vector<int> all;

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            vertices = 0;
            dfs(i);
            all.emplace_back(vertices);
        }
    }

    ll ans = 0, sum = 0;
    for (int i = 0; i < all.size(); ++i)
    {
        ans += sum * all[i];
        sum += all[i];
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ofstream fout(getenv("OUTPUT_PATH"));
    int n, p, x, y;
    cin >> n >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    ll result = journeyToMoon(n);
    fout << result << "\n";
    fout.close();

    return 0;
}
