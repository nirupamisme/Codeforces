#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max_loc, min_loc, max, min, swaps;

    cin >> n;
    vector<int> v(n);

    for (auto& x: v)
        cin >> x;

    max = min = v[0];
    max_loc = min_loc = 0;
    for (int i = 1; i < n; ++i) {
        if (max < v[i]) {
            max = v[i];
            max_loc = i;
        }

        if (min >= v[i]) {
            min = v[i];
            min_loc = i;
        }
    }

    if (max_loc < min_loc)
        swaps = max_loc + (n - min_loc - 1);
    else
        swaps = max_loc + (n - min_loc - 2);

    cout << swaps << endl;

    return 0;
}
