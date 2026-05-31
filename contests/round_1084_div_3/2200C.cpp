#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif

void solve(int n, std::string &s)
{
    std::string st;

    for(char c: s)
    {
        if (!st.empty() && st.back() == c) {
            st.pop_back();
        }
        else {
            st.push_back(c);
        }
    }

    std::cout << (st.empty() ? "YES" : "NO") << '\n';
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::string s;
        std::cin >> s;

        debug(i, n, s);

        solve(n, s);
    }

    return 0;
}
