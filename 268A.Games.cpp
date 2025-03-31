#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c = 0;

    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i] >> b[i];

    for (int i = 0; i < n; ++i) {
        c += count(b.begin(), b.end(), a[i]);
    }

    cout << c << endl;

    return 0;
}
