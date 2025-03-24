#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f, p, w = 0;

    cin >> n >> f;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        if (p <= f)
            w++;
        else
            w += 2;
    }

    cout << w << endl;

    return 0;
}
