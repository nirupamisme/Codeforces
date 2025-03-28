#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;
    
    cin >> n >> x;
    vector<int> p(x);
    for (int i = 0; i < x; ++i)
        cin >> p[i];

    cin >> y;
    vector<int> q(y);
    for (int i = 0; i < y; ++i)
        cin >> q[i];

    vector<int> m(x + y);
    merge(p.begin(), p.end(), q.begin(), q.end(), m.begin());

    for (int i = 1; i <= n; ++i) {
        if (find(m.begin(), m.end(), i) == m.end()) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}
