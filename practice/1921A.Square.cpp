#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, area;
    vector<int> x(4);
    vector<int> y(4);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < 4; ++j)
            cin >> x[j] >> y[j];

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        area = (x[3] - x[0]) * (y[3] - y[0]);
        cout << area << endl;
    }

    return 0;
}
