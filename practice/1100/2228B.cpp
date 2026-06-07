#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve() {
    long long n, k, a, b;
    std::cin >> n >> k >> a >> b;

    long long d = std::min(std::abs(a - b), n - std::abs(a - b));

    if (d == 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::cout << std::min(d + k / 2, n / 2) << "\n";
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    if (std::cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}
