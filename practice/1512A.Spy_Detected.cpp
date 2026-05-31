#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, a;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        vector<int> v(n), w(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            w[i] = v[i];
        }

        sort(w.begin(), w.end());

        if (w[0] == w[1])
            a = w[n-1];
        else
            a = w[0];

        for (int i = 0; i < n; ++i) {
            if (v[i] == a) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
