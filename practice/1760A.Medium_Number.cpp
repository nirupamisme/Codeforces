#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        vector<int> v(3);
        for (auto& x: v)
            cin >> x;
        
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    }

    return 0;
}
