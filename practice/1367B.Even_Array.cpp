#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, odd, even;
    vector<int> v;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        v.resize(n);
        for (auto& x: v)
            cin >> x;
        
        even = odd = 0;
        for (int j = 0; j < n; ++j) {
            if ((j % 2) != (v[j] % 2)) {
                if (v[j] % 2 == 0)
                    odd++;
                else
                    even++;
            }
        }

        if (even == odd)
            cout << even << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
