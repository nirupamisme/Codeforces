#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    string s1, s2{"codeforces"};

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s1;

        n = 0;
        for (int j = 0; j < s2.length(); ++j)
            if (s1[j] != s2[j])
                n++;

        cout << n << endl;
    }

    return 0;
}
