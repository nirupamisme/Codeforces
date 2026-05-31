#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int c = min(a, b);
    int m = max(a, b);
    int d = static_cast<int> ((m - c) / 2);

    cout << c << " " << d << endl;

    return 0;
}
