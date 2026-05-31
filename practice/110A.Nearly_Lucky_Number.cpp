#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    int s = 0;

    cin >> n;

    while (n != 0) {
        int d = n % 10;
        n = static_cast<long long> (n / 10);
        if (d == 4 || d == 7) {
            s++;
        }
        else {
            continue;
        }
    }

    if (s == 7 || s == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
