#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string s1, s2;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s1 >> s2;

        char c = s1[0];
        s1[0] = s2[0];
        s2[0] = c;

        cout << s1 << " " << s2 << endl;
    }

    return 0;
}
