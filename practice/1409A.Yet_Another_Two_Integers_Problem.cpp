#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, m;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        m = 0;
        c = b - a;
        if (c != 0) {
            m = abs(static_cast<int> (c / 10));
            if (c % 10 != 0)
                m++;
        }
        cout << m << endl;
    }

    return 0;
}
