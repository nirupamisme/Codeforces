#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, count, n;
    string s;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;

        n = s.length();
        count = (10 * (int) ((s[0] - '0') - 1)) + (n * (n + 1)) / 2;

        cout << count << endl;
    }

    return 0;
}
