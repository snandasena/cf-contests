#include <bits/stdc++.h>

using namespace std;
char ans[100005] = {'\0'};
bool mark[100005];

vector<string> split_string(string);

// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string s, int n, int k)
{
    int l = 0, r = n - 1;
    // macking the palindrome
    while (l <= r)
    {
        if (l == r)
        {
            ans[l] = s[l];
            break;
        }

        if (s[l] == s[r])
        {
            ans[l] = s[l];
            ans[r] = s[r];
        }
        else
        {
            if (s[l] >= s[r])
            {
                mark[r] = 1;
                k--;
                ans[l] = ans[r] = s[l];
            }
            else
            {
                mark[l] = 1;
                k--;
                ans[l] = ans[r] = s[r];
            }
        }
        l++;
        r--;
    }

    if (k < 0)
    {
        return "-1";
    }

    // maximising number
    l = 0, r = n - 1;
    while (l <= r)
    {
        if (l == r)
        {
            if (ans[l] < '9' && k >= 1)
            {
                ans[l] = '9';
            }
            break;
        }

        if (ans[l] < '9')
        {
            if (mark[l] == 0 && mark[r] == 0 && k >= 2)
            {
                k -= 2;
                ans[l] = ans[r] = '9';
            }
            else if ((mark[l] || mark[r]) && k >= 1)
            {
                k--;
                ans[l] = ans[r] = '9';
            }
        }

        l++, r--;
    }

    ans[n] = '\0';
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string s;
    getline(cin, s);

    string result = highestValuePalindrome(s, n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y)
    {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
