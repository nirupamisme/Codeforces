#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, t, p = 0;

    cin >> n >> m;
    t = 240 - m;
    
    for (int i = 1; i <= n; ++i) {
        if (t >= i*5) {
            t -= i * 5;
            p++;
            continue;
        }
        else
            break;
    }

    cout << p << endl;

    return 0;
}
