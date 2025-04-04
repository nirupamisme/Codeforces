#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, l, c = 0;

    cin >> n;

    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    s = l = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] > l) {
            c++;
            l = v[i];
        }
        else if (v[i] < s) {
            c++;
            s = v[i];
        }
        else {
            continue;
        }
    }

    cout << c << endl;

    return 0;
}
