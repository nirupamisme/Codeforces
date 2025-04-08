#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r, p = 10, n = 1;

    cin >> k >> r;

    while (true) {
        int d = (n * k) % p;
        // cout << d << " ";
        if (d == 0)
            break;
        else
            if (d == r)
                break;
        n++;
    }

    cout << n << endl;

    return 0;
}
