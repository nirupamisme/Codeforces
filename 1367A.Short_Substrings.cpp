#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string s;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;

        cout << s[0];
        for (int j = 1; j < s.length()-1; j += 2) {
            cout << s[j];
        }
        cout << s[s.length()-1] << endl;
    }

    return 0;
}
