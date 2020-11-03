#include <bits/stdc++.h>

using namespace std;

int ms[8][9] =
        {
                {4, 9, 2, 3, 5, 7, 8, 1, 6},
                {4, 3, 8, 9, 5, 1, 2, 7, 6},
                {2, 9, 4, 7, 5, 3, 6, 1, 8},
                {2, 7, 6, 9, 5, 1, 4, 3, 8},
                {8, 1, 6, 3, 5, 7, 4, 9, 2},
                {8, 3, 4, 1, 5, 9, 6, 7, 2},
                {6, 7, 2, 1, 5, 9, 8, 3, 4},
                {6, 1, 8, 7, 5, 3, 2, 9, 4},
        };

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    int cost = INT_MAX;
    for (auto &m : ms) {
        int tmp = 0, z = 0;
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                int r = m[z] - s[j][k];
                r = r > 0 ? r : -1 * r;
                tmp += r;
                z++;
            }
        }

        cost = min(cost, tmp);
    }

    return cost;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
