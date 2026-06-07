# Competitive Programming Snippets

This directory contains reusable data structures and algorithms implemented in C++ for competitive programming.

---

# Implemented Data Structures

## 1. Disjoint Set Union (DSU)

File

text dsu.h 

### Description

A Disjoint Set Union (DSU), also known as Union-Find, is a data structure used to efficiently maintain a collection of disjoint sets.

This implementation uses:

- Path Compression
- Union by Size

### Complexity

| Operation | Complexity |
|------------|------------|
| find(x) | O(α(n)) |
| unite(a, b) | O(α(n)) |
| same(a, b) | O(α(n)) |
| component_size(x) | O(α(n)) |
| num_components() | O(1) |

where α(n) is the inverse Ackermann function.

### Supported Operations

cpp DSU dsu(n);  dsu.unite(a, b);  dsu.same(a, b);  dsu.find(x);  dsu.component_size(x);  dsu.num_components(); 

### Applications

- Connected component queries
- Dynamic connectivity problems
- Kruskal's Minimum Spanning Tree algorithm
- Grouping and clustering problems
- Graph connectivity

---

## 2. Binary Indexed Tree (Fenwick Tree)

File

text bit.h 

### Description

A Binary Indexed Tree (BIT), also known as a Fenwick Tree, is a data structure that supports efficient point updates and prefix sum queries.

This implementation supports:

- Point Update
- Prefix Sum Query
- Range Sum Query

### Complexity

| Operation | Complexity |
|------------|------------|
| update(idx, delta) | O(log n) |
| query(idx) | O(log n) |
| range_query(l, r) | O(log n) |

### Supported Operations

cpp BIT bit(n);  bit.update(idx, delta);  bit.query(idx);  bit.range_query(l, r); 

### Applications

- Prefix sums with updates
- Frequency counting
- Inversion counting
- Dynamic range sum queries
- Order statistics (advanced variants)

---

# Testing

Every data structure should have a corresponding test file.

Current tests:

text test/
├── dsu_test.cpp
└── bit_test.cpp 

Compile and run:

bash
g++ test/dsu_test.cpp -o dsu_test
./dsu_test

g++ test/bit_test.cpp -o bit_test
./bit_test 

---

# Learning Progress

Completed:

- [x] Disjoint Set Union (DSU)
- [x] Binary Indexed Tree (Fenwick Tree)

Planned:

- [ ] Segment Tree
- [ ] BFS / DFS
- [ ] Dijkstra
- [ ] Binary Lifting
- [ ] Trie
- [ ] Sparse Table
- [ ] Lowest Common Ancestor (LCA)
- [ ] Strongly Connected Components (SCC)
- [ ] Max Flow

---

# Notes

- All data structures are implemented from scratch for learning purposes.
- Each implementation should be accompanied by a test file before being added to the library.
- Preference is given to readability and understanding before micro-optimizations.
