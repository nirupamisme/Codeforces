#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, c, m;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;

        m = min(a, min(b, c));
        if ((a + b + c - m) >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
