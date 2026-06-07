/*---------------------------------------------------------------------------*\
Author:      Nirupam Pal
Date:        06/06/2026
File:        dsu.h
Version:     1.0
Description: Disjoint set union data structure (DSU)
*\---------------------------------------------------------------------------*/

#ifndef DSU_H
#define DSU_H

#include <vector>
#include <algorithm>

class DSU {
private:
    std::vector<int> parent;
    std::vector<int> size;
    int components;

public:
    // Constructor
    explicit DSU(int n): parent(n+1), size(n+1, 1), components(n) {
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
    }

    // Finding the parent of a node
    int find(const int x) {
        if (parent[x] == x) {
            return x;
        }

        // Path compression (only happens when find is called)
        return parent[x] = find(parent[x]);
    }

    // Check if two nodes are in the same component
    bool same(const int a, const int b) {
        return find(a) == find(b);
    }

    // Union of two components
    bool unite(const int a, const int b) {
        int rootA = find(a);
        int rootB = find(b);

        if (rootA == rootB) {
            return false;
        }

        if (size[rootA] < size[rootB]) {
            std::swap(rootA, rootB);
        }

        parent[rootB] = rootA;
        size[rootA] += size[rootB];
        components--;

        return true;
    }

    // Get the size of a component
    int component_size(const int x) {
        return size[find(x)];
    }

    // Get the number of components
    int num_components() const {
        return components;
    }

    // Destructor
    ~DSU() = default;
};

#endif  // DSU_H
