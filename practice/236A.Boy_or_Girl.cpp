#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, s1;

    getline(cin, s);
    s1 += s[0];
    for (int i = 1; i < s.length(); ++i) {
        if (s1.find(s[i]) == -1)
            s1 += s[i];
    }

    if (s1.length() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
