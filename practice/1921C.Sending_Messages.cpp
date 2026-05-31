#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, f, a, b, j, k, l;
    vector<int> v;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> f >> a >> b;
        v.resize(n);
        for (auto& x: v)
            cin >> x;

        for (int i = 0; i < n; ++i) {
            if (i == 0)
                k = 0;
            else
                k = v[i-1];
            if (static_cast<double> (a) / b * (v[i] - k) > 1)
                f -= b;
            else
                f -= (v[i] - k) * a;

            if (f <= 0) {
                cout << "NO" << endl;
                break;
            }
        }
        if (f > 0)
            cout << "YES" << endl;
    }

    return 0;
}
