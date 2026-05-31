#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        vector<int> v(3);
        for (auto& x: v)
        cin >> x;

        sort(v.begin(), v.end());

        if (v[0] + v[1] == v[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
