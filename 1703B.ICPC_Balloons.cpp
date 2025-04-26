#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, sum;
    string s;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> s;

        sort(s.begin(), s.end());

        sum = 2;
        for (int j = 1; j < n; ++j) {
            if (s[j] != s[j-1])
                sum += 2;
            else
                sum++;
        }

        cout << sum << endl;
    }

    return 0;
}
