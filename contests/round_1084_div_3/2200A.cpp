#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(const int &a, std::vector<int> &v) {
    std::sort(v.begin(), v.end());

    int count = 1;
    for (int i = a-2; i >= 0; --i) {
        if (v[a-1] == v[i]) {
            count++;
        }
        else {
            break;
        }
    }
    std::cout << count << "\n";
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;

        std::vector<int> v(a);
        for (auto &j: v) {
            std::cin >> j;
        }

        debug(i, a, v);

        solve(a, v);
    }

    return 0;
}
