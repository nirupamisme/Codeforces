#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, h, m, time;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> h >> m;

        time = (24 - h - 1) * 60 + (60 - m);

        cout << time << endl;
    }

    return 0;
}
