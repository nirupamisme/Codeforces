#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, t1 = 0, t2 = 0, t3 = 0, m;

    cin >> n;

    vector<int> v1, v2, v3;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 1)
            v1.push_back(i+1);
        else if (a == 2)
            v2.push_back(i+1);
        else
            v3.push_back(i+1);
    }

    m = min(v1.size(), (min(v2.size(), v3.size())));

    cout << m << endl;
    for (int i = 0; i < m; ++i)
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;

    return 0;
}
