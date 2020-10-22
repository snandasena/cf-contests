#include <bits/stdc++.h>

using ll = long long;
using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<ll> candies(100005);
    candies[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            candies[i] = candies[i-1] + 1;
        } else {
            candies[i] = 1;
        }
    }

    ll ans = candies[n - 1], temp = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) {
            temp = candies[i + 1] + 1;
        } else {
            temp = 1;
        }

        ans += max(temp, candies[i]);
        candies[i] = temp;
    }

    return ans;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
