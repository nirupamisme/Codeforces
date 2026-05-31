#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, max;
    vector<int> v;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;

        v.resize(n);
        for (auto& x: v)
            cin >> x;

        int m = 0;
        max = 0;
        for (int j = 0; j < n; ++j) {
            if (v[j] == 0)
                m++;
            else
                m = 0;
            
            max = (max < m) ? m : max;
        }

        cout << max << endl;
    }

    return 0;
}
