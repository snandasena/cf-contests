#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.obstacles
int queensAttack(int n, int k, int x, int y, vector<vector<int>> oc) {

    int d11, d12, d21, d22, r1, r2, c1, c2;
    d11 = min(x - 1, y - 1);
    d12 = min(n - x, n - y);
    d21 = min(n - x, y - 1);
    d22 = min(x - 1, n - y);

    r1 = y - 1;
    r2 = n - y;
    c1 = x - 1;
    c2 = n - x;

    for (int i = 0; i < k; ++i) {
        int ox = oc[i][0], oy = oc[i][1];
        if (x > ox && y > oy && x - ox == y - oy) d11 = min(d11, x - ox - 1);
        if (ox > x && oy > y && ox - x == oy - y) d12 = min(d12, ox - x - 1);
        if (ox > x && y > oy && ox - x == y - oy) d21 = min(d21, ox - x - 1);
        if (x > ox && oy > y && x - ox == oy - y) d22 = min(d22, x - ox - 1);

        if (x == ox && oy < y) r1 = min(r1, y - oy - 1);
        if (x == ox && oy > y) r2 = min(r2, oy - y - 1);
        if (y == oy && ox < x) c1 = min(c1, x - ox - 1);
        if (y == oy && ox > x) c2 = min(c2, ox - x - 1);
    }

    return d11 + d12 + d21 + d22 + r1 + r2 + c1 + c2;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
