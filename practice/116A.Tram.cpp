#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, cap = 0, max_cap = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        cap += (b - a);
        if (cap > max_cap)
            max_cap = cap;
    }

    cout << max_cap << endl;

    return 0;
}
