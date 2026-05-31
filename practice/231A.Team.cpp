#include <iostream>

using namespace std;

int main() {
    int n, sol = 0;

    cin >> n;
    int p[n][3];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> p[i][j];

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += p[i][j];
        }
        if (sum >= 2)
            sol += 1;
    }

    cout << sol << endl;

    return 0;
}
