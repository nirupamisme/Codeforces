#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve() {
    int n;
    std::cin >> n;

    bool six_seven = false;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;

        if (x == 67) {
            six_seven = true;
        }
    }

    std::cout << (six_seven ? "YES" : "NO") << std::endl;
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while (n--) {
        solve();
    }

    return 0;
}
