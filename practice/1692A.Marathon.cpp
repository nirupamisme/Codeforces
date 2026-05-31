#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> v(4);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int s = 0;

        for (auto& x: v)
        cin >> x;

        for (int j = 1; j < v.size(); ++j)
            if (v[0] < v[j])
                s++;

        cout << s << endl;
    }

    return 0;
}
