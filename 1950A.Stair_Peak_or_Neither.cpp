#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, c, p;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;

        p = 0;
        if ((a < b) && (b < c))
            p = 1;
        if ((a < b) && (b > c))
            p = 2;

        switch (p) {
            case 1: cout << "STAIR" << endl; break;
            case 2: cout << "PEAK" << endl; break;
            default: cout << "NONE" << endl; break;
        }
    }

    return 0;
}
