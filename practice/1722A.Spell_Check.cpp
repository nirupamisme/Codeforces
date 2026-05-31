#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> s;

        if (n == 5) {
            sort(s.begin(), s.end());
            if (s == "Timru")
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
