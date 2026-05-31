#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < n; i++) {
        int r = a[i] % b[i];
        if (r != 0) {
            c[i] = b[i] - a[i] + static_cast<int> (a[i] / b[i]) * b[i];
        }
    }

    for (auto x: c)
        cout << x << endl;

    return 0;
}
