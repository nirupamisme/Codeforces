#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    char c;
    string s = "codeforces";

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> c;

        auto it = find(s.begin(), s.end(), c);

        if (it != s.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
