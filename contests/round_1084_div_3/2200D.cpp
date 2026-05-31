#include <bits/stdc++.h>

#ifdef DEBUG
#include "../../algo/debug.h"
#else
#define debug(...) 42
#endif
void solve(const int &n, std::vector<int> &v, int &p1, int &p2) {
    if (p1 >= p2) {
        for (int i = 0; i < n; ++i) {
            std::cout << v[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << "\n";
        return;
    }

    std::vector<int> best_global = v;

    // The operations allow us to shift any number of elements from the left 
    // into the portal window, and out to the right, or vice versa.
    // This means we can choose how many elements from the left external zone (0 to p1)
    // pass through the portal, effectively changing the window contents globally.
    
    // We simulate the total number of left-to-right or right-to-left migrations.
    // To do this comprehensively, we can iterate over all valid sub-segments 
    // that can end up inside the portals.
    
    for (int left_pull = 0; left_pull <= p1; ++left_pull) {
        for (int right_pull = 0; right_pull <= (n - p2); ++right_pull) {
            
            std::vector<int> current_state = v;
            
            // Define the temporarily expanded window bounds
            int active_p1 = p1 - left_pull;
            int active_p2 = p2 + right_pull;
            int active_window = active_p2 - active_p1;
            
            // Check all cyclic rotations within this active expanded zone
            for (int r = 0; r < active_window; ++r) {
                std::rotate(current_state.begin() + active_p1, current_state.begin() + active_p1 + 1, current_state.begin() + active_p2);
                
                // Only consider it if the elements outside our original p1 and p2 
                // end up back in legal positions, or check if this state is universally reachable
                if (current_state < best_global) {
                    best_global = current_state;
                }
            }
        }
    }

    // Output the optimal lexicographical result
    for (int i = 0; i < n; ++i) {
        std::cout << best_global[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << "\n";
}

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, p1, p2;
        std::cin >> n >> p1 >> p2;

        std::vector<int> v(n);
        for (auto &j: v) {
            std::cin >> j;
        }

        debug(i, v);

        solve(n, v, p1, p2);
    }

    return 0;
}
