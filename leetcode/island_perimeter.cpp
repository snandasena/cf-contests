#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>> &grid) {
        int ans = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 0) continue;

                int cnt = 0;
                if (i - 1 >= 0 && grid[i - 1][j] == 1) cnt++;
                if (j - 1 >= 0 && grid[i][j - 1] == 1) cnt++;
                if (i + 1 < grid.size() && grid[i + 1][j] == 1)cnt++;
                if (j + 1 < grid[i].size() && grid[i][j + 1] == 1) cnt++;

                ans += (4 - cnt);
            }
        }

        return ans;
    }
};

int main() {

    vector<vector<int>> grid = {{0, 1, 0, 0},
                                {1, 1, 1, 0},
                                {0, 1, 0, 0},
                                {1, 1, 0, 0}};

    Solution solution;
    cout << solution.islandPerimeter(grid);
    return 0;
}