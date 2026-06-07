#ifndef BIT_H
#define BIT_H

#include <vector>

class BIT {
private:
    std::vector<long long> tree;
    int n;

    static int lowbit(const int x) {
        return x & (-x);
    }

public:
    // Constructor
    explicit BIT(int size): tree(size+1, 0), n(size) {}

    // Update the tree
    void update(int idx, long long delta) {
        while (idx <= n) {
            tree[idx] += delta;
            idx += lowbit(idx);
        }
    }

    // Prefix query
    long long query(int idx) const {
        long long sum = 0;

        while (idx > 0) {
            sum += tree[idx];
            idx -= lowbit(idx);
        }

        return sum;
    }

    // Query between a range
    long long range_query(int l, int r) const {
        return query(r) - query(l-1);
    }
};

#endif  // BIT_H
