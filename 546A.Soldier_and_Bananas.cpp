#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, s, n, b;

    cin >> c >> s >> n;

    b = (c * n * (n + 1) / 2) - s;

    if (b > 0)
        cout << b << endl;
    else
        cout << 0 << endl;

    return 0;
}
