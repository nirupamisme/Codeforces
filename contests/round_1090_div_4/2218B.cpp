#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(const std::vector<int> &a) {
    int max = a[0];
    int s = a.size();
    int val = 0;

    for (int i = 0; i < s; ++i) {
        if (a[i] > max) {
            max = a[i];
        }

        val -= a[i];
    }

    val += 2 * max;
    std::cout << val << '\n';
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> a(7);

    for (int i = 0; i < n; ++i) {
        for (auto &j : a) {
            std::cin >> j;
        }

        debug(i, a);

        solve(a);
    }

    return 0;
}
