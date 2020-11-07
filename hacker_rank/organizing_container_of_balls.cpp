#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
    int cnts = static_cast<int>(container.size());
    vector<int> R(cnts, 0), C(cnts, 0);
    for (int i = 0; i < cnts; ++i) {
        for (int j = 0; j < cnts; ++j) {
            C[i] += container[i][j];
            R[i] += container[j][i];
        }
    }
    sort(R.begin(), R.end());
    sort(C.begin(), C.end());

    if (C == R) return "Possible";
    else return "Impossible";

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
