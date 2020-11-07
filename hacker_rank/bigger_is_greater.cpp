#include <bits/stdc++.h>

using namespace std;

template<typename T>
bool next_perm(vector<T> &vec) {
    if (vec.empty()) return false;
    typename vector<T>::iterator i = vec.end() - 1;
    while (i > vec.begin() && *(i - 1) > *i)
        --i;

    if (i == vec.begin()) return true;
    typename vector<T>::iterator j = vec.end() - 1;

    while (*j <= *(i - 1))
        --j;
    iter_swap(i - 1, j);

    reverse(i, vec.end());
    return true;
}

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
    if (!next_permutation(w.begin(), w.end())) return "no answer";
    else return w;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
