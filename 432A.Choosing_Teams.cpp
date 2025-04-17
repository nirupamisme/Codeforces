#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m, teams = 0;

    cin >> n >> k;

    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    sort(v.begin(), v.end());

    m = static_cast<int> (v.size() / 3);
    for (int i = 1; i <= m; ++i) {
        if ((v[i*3-1] + k) <= 5)
            teams++;
        else
            break;
    }

    cout << teams << endl;

    return 0;
}
