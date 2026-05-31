#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, s_rev;
    stack<char> rev;

    cin >> s >> s_rev;

    if (s.length() != s_rev.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++)
        rev.push(s[i]);

    for (int i = 0; i < s.length(); i++) {
        if (rev.top() != s_rev[i]) {
            cout << "NO" << endl;
            return 0;
        }
        else
            rev.pop();
    }

    cout << "YES" << endl;

    return 0;
}
