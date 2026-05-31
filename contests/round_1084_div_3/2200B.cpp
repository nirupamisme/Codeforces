#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(const int &n, std::vector<int> &v) {
    if (std::is_sorted(v.begin(), v.end())) {
        std::cout << n << "\n";
    }
    else {
        std::cout << "1\n";
    }
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<int> v(n);
        for (auto &j: v) {
            std::cin >> j;
        }

        debug(i, n, v);

        solve(n, v);
    }

    return 0;
}
