#include <bits/stdc++.h>

using namespace std;

int main() {
    int zero = 0, one = 0;
    string s;

    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') {
            zero++;
            one = 0;
        }
        else {
            one++;
            zero = 0;
        }
        if (one == 7 || zero == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
