#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    vector<int> v;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        v.resize(n);
        for (auto& x: v)
            cin >> x;

        sort(v.begin(), v.end());
        v[0] += 1;

        int p = accumulate(v.begin(), v.end(), 1, multiplies<int>());
        cout << p << endl;
    }

    return 0;
}
