#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, g = 0;
    string s1, s2;

    cin >> n;
    cin >> s1;
    g++;
    for (int i = 1; i < n; i++) {
        cin >> s2;
        if (s1 != s2)
            g++;
        s1 = s2;
    }

    cout << g << endl;

    return 0;
}
