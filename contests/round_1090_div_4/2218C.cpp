#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(const int &n) {
    for (int i = 0; i < n; ++i) {
        int small = i + 1;
        int median = 3 * n - 1 - 2 * i;
        int large = 3 * n - 2 * i;
        
        std::cout << small << " " << median << " " << large << " ";
    }
    std::cout << "\n";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        debug(t, n);

        solve(n);
    }

    return 0;
}
