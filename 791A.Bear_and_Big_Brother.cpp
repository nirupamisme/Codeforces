#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, years = 0;

    cin >> n >> m;

    while (n <= m) {
        n *= 3;
        m *= 2;
        years++;
    }

    cout << years << endl;

    return 0;
}
