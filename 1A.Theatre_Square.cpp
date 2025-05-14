#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, a, total;

    cin >> n >> m >> a;

    total = ceil(static_cast<double>(n) / a) * ceil(static_cast<double>(m) / a);
    cout << total << endl;

    return 0;
}
