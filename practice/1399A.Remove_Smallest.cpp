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
        
        sort(v.rbegin(), v.rend());

        while(v.size() != 1) {
            auto it = v.end();
            if ((*(it - 2) - *(it - 1)) <= 1) {
                v.pop_back();
            }
            else {
                cout << "NO" << endl;
                break;
            }
        }
        if (v.size() == 1)
            cout << "YES" << endl;
    }

    return 0;
}
