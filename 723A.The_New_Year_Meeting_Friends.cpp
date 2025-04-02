#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    vector<int> x(3);

    for (auto& i: x)
        cin >> i;

    sort(x.begin(), x.end());

    sum += x[1] - x[0];
    sum += x[2] - x[1];

    cout << sum << endl;

    return 0;
}
