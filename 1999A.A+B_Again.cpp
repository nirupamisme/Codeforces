#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, sum;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a;

        sum = a % 10;
        a = static_cast<int> (a / 10);
        sum += a;

        cout << sum << endl;
    }

    return 0;
}
