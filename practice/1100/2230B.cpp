#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve() {
    std::string s;
    std::cin >> s;

    int n = static_cast<int>(s.size());

    debug(s, n);

    std::vector<int> pref2(n + 1, 0);
    std::vector<int> suff13(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref2[i + 1] = pref2[i] + (s[i] == '2');
    }

    for (int i = n - 1; i >= 0; i--) {
        suff13[i] = suff13[i + 1] + (s[i] == '1' || s[i] == '3');
    }

    int best = 0;

    for (int i = 0; i <= n; i++) {
        best = std::max(best, pref2[i] + suff13[i]);
    }

    std::cout << n - best << '\n';
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

