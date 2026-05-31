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

        cout << v[n-1] - v[0] << endl;
    }

    return 0;
}
