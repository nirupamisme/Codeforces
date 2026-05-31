#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(const int &a) {
    std::cout << a << '\n';
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;

        debug(i, a);

        solve(a);
    }

    return 0;
}
