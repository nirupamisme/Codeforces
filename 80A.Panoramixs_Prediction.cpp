#include <bits/stdc++.h>

using namespace std;

bool ifPrime(int a) {
    if (a == 2 || a == 3 || a == 5 || a == 7)
        return true;
    if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
        return true;
    else
        return false;
}

int main() {
    int m, n;

    cin >> m >> n;

    for (int i = m + 1; i <= n; ++i) {
        if (i != n && ifPrime(i)) {
            cout << "NO" << endl;
            break;
        }
        if (i == n) {
            if (ifPrime(i))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
