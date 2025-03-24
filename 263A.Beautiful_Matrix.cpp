#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 5, t = 0, p, q;
    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                p = i;
                q = j;
            }
        }
    }

    t = abs(2 - p) + abs(2 - q);

    cout << t << endl;

    return 0;
}
